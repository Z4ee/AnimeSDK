#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8153B0)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x815310)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x815520)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x815490)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8153C0)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x161A0AD0)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_METHOD_2_217BB3FC4AC50D8F_OFFSET UNITYSDK_OFFSET(0x815610)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x8156B0)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_METHOD_2_74D2DB51E1B704B6_1_OFFSET UNITYSDK_OFFSET(0x161A1570)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_METHOD_2_74D2DB51E1B704B6_OFFSET UNITYSDK_OFFSET(0x161A1430)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x8155B0)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x815580)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_METHOD_2_F777B3BEDBE68D53_OFFSET UNITYSDK_OFFSET(0x8156A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int Spline_WayPoint_TypeDefinitionIndex = 49843;

	struct alignas(8) Spline_WayPoint
	{
		::System::String* Name; // 0x10
		::System::Int32 Index; // 0x18

		static ::MoleMole::Config::Spline_WayPoint get_Empty()
		{
			return ((::MoleMole::Config::Spline_WayPoint(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_GET_EMPTY_OFFSET))();
		}

		::System::Boolean Equals(::MoleMole::Config::Spline_WayPoint a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::Spline_WayPoint))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_GETHASHCODE_OFFSET))(this);
		}

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_FROMFLX_OFFSET))(this, a1);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
		*/

		static ::System::Boolean Method_2_74D2DB51E1B704B6(::MoleMole::Config::Spline_WayPoint a1, ::MoleMole::Config::Spline_WayPoint a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Config::Spline_WayPoint, ::MoleMole::Config::Spline_WayPoint))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_METHOD_2_74D2DB51E1B704B6_OFFSET))(a1, a2);
		}

		::System::Int32 Method_2_95780ED94B90ED36()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_METHOD_2_95780ED94B90ED36_OFFSET))(this);
		}

		static ::System::Boolean Method_2_74D2DB51E1B704B6_1(::MoleMole::Config::Spline_WayPoint a1, ::MoleMole::Config::Spline_WayPoint a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Config::Spline_WayPoint, ::MoleMole::Config::Spline_WayPoint))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_METHOD_2_74D2DB51E1B704B6_1_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_217BB3FC4AC50D8F(::MoleMole::Config::Spline_WayPoint& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::Spline_WayPoint&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_METHOD_2_217BB3FC4AC50D8F_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_F777B3BEDBE68D53(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_METHOD_2_F777B3BEDBE68D53_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
		}
	};
}
