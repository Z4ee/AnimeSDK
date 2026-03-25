#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIVariable.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }

#define RPG_GAMECORE_AIVARIABLEBOOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x16E93740)
#define RPG_GAMECORE_AIVARIABLEBOOL_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x16E936A0)
#define RPG_GAMECORE_AIVARIABLEBOOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x16E93650)
#define RPG_GAMECORE_AIVARIABLEBOOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16E93800)
#define RPG_GAMECORE_AIVARIABLEBOOL_METHOD_3_2F59C04267FE0898_1_OFFSET UNITYSDK_OFFSET(0x16E938F0)
#define RPG_GAMECORE_AIVARIABLEBOOL_METHOD_3_2F59C04267FE0898_OFFSET UNITYSDK_OFFSET(0x16E938B0)
#define RPG_GAMECORE_AIVARIABLEBOOL_METHOD_3_56950E5F6703F137_OFFSET UNITYSDK_OFFSET(0x16E93620)
#define RPG_GAMECORE_AIVARIABLEBOOL_METHOD_3_AAB430F0C614C608_OFFSET UNITYSDK_OFFSET(0x16E92AD0)
#define RPG_GAMECORE_AIVARIABLEBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x16E92AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIVariableBool_TypeDefinitionIndex = 14303;

	class AIVariableBool : public ::RPG::GameCore::AIVariable
	{
	public:
		::System::Boolean Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_56950E5F6703F137(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIVariableBool*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIVariableBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_METHOD_3_56950E5F6703F137_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AAB430F0C614C608(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIVariableBool* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_METHOD_3_AAB430F0C614C608_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::GameCore::AIVariable* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::RPG::GameCore::AIVariableBool* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean Method_3_2F59C04267FE0898(::RPG::GameCore::AIVariableBool* a1, ::RPG::GameCore::AIVariableBool* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableBool*, ::RPG::GameCore::AIVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_METHOD_3_2F59C04267FE0898_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_3_2F59C04267FE0898_1(::RPG::GameCore::AIVariableBool* a1, ::RPG::GameCore::AIVariableBool* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableBool*, ::RPG::GameCore::AIVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_METHOD_3_2F59C04267FE0898_1_OFFSET))(a1, a2);
		}
	};
}
