#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x740E20)
#define MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_FROMFLX_OFFSET UNITYSDK_OFFSET(0x740D90)
#define MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_METHOD_2_3338E25D676DBB67_OFFSET UNITYSDK_OFFSET(0x740EB0)
#define MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x740EE0)
#define MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_METHOD_2_5CC415752F05F246_OFFSET UNITYSDK_OFFSET(0x740F60)
#define MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_METHOD_2_674524A234498963_OFFSET UNITYSDK_OFFSET(0x740F30)
#define MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_METHOD_2_C1DAD850E2998E73_OFFSET UNITYSDK_OFFSET(0x740EC0)
#define MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x740E80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RuntimePolygonBound_TypeDefinitionIndex = 40494;

	struct alignas(8) RuntimePolygonBound
	{
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* xzPoints; // 0x10
		::System::Single heightY; // 0x18
		::UnityEngine::Vector3 originPos; // 0x1C
		::UnityEngine::Vector3 eulerAngles; // 0x28

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_FROMFLX_OFFSET))(this, a1);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_FROMBINARY_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Method_2_3338E25D676DBB67(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_METHOD_2_3338E25D676DBB67_OFFSET))(this, a1, a2);
		}

		/*
		::UnityEngine::Bounds Method_2_C1DAD850E2998E73()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_METHOD_2_C1DAD850E2998E73_OFFSET))(this);
		}
		*/

		::System::Boolean Method_2_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_METHOD_2_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_2_674524A234498963(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_METHOD_2_674524A234498963_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_5CC415752F05F246(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_METHOD_2_5CC415752F05F246_OFFSET))(this, a1, a2);
		}
	};
}
