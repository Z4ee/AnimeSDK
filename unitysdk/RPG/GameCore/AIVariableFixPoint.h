#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIVariable.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }

#define RPG_GAMECORE_AIVARIABLEFIXPOINT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CD69A50)
#define RPG_GAMECORE_AIVARIABLEFIXPOINT_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x1CD69910)
#define RPG_GAMECORE_AIVARIABLEFIXPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD698C0)
#define RPG_GAMECORE_AIVARIABLEFIXPOINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD69B40)
#define RPG_GAMECORE_AIVARIABLEFIXPOINT_METHOD_3_03174FDB36F50989_OFFSET UNITYSDK_OFFSET(0x1CD69890)
#define RPG_GAMECORE_AIVARIABLEFIXPOINT_METHOD_3_93F64DB26937CC82_OFFSET UNITYSDK_OFFSET(0x1CD69C30)
#define RPG_GAMECORE_AIVARIABLEFIXPOINT_METHOD_3_ADFD879C76B51C83_OFFSET UNITYSDK_OFFSET(0x1CD69D80)
#define RPG_GAMECORE_AIVARIABLEFIXPOINT_METHOD_3_DF067467E6E7E848_OFFSET UNITYSDK_OFFSET(0x1CD687E0)
#define RPG_GAMECORE_AIVARIABLEFIXPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD687D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIVariableFixPoint_TypeDefinitionIndex = 15438;

	class AIVariableFixPoint : public ::RPG::GameCore::AIVariable
	{
	public:
		::RPG::GameCore::FixPoint Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFIXPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_03174FDB36F50989(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIVariableFixPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIVariableFixPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFIXPOINT_METHOD_3_03174FDB36F50989_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DF067467E6E7E848(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIVariableFixPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIVariableFixPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFIXPOINT_METHOD_3_DF067467E6E7E848_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFIXPOINT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::GameCore::AIVariable* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFIXPOINT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::RPG::GameCore::AIVariableFixPoint* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariableFixPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFIXPOINT_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFIXPOINT_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean Method_3_93F64DB26937CC82(::RPG::GameCore::AIVariableFixPoint* a1, ::RPG::GameCore::AIVariableFixPoint* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableFixPoint*, ::RPG::GameCore::AIVariableFixPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFIXPOINT_METHOD_3_93F64DB26937CC82_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_3_ADFD879C76B51C83(::RPG::GameCore::AIVariableFixPoint* a1, ::RPG::GameCore::AIVariableFixPoint* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableFixPoint*, ::RPG::GameCore::AIVariableFixPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFIXPOINT_METHOD_3_ADFD879C76B51C83_OFFSET))(a1, a2);
		}
	};
}
