#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class PorterPuzzle; }
namespace RPG::Client::Prop { class PorterTarget; }

#define RPG_CLIENT_PROP_PORTERTARGETGROUP_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xDCF75F0)
#define RPG_CLIENT_PROP_PORTERTARGETGROUP_METHOD_1_2EDEE9BCD5AAB2CD_OFFSET UNITYSDK_OFFSET(0xDCF6950)
#define RPG_CLIENT_PROP_PORTERTARGETGROUP_METHOD_1_65FF2FB4CA0B10B5_OFFSET UNITYSDK_OFFSET(0xDCF7A70)
#define RPG_CLIENT_PROP_PORTERTARGETGROUP_METHOD_1_7EB98D7683D8A8D4_OFFSET UNITYSDK_OFFSET(0xDCF7DA0)
#define RPG_CLIENT_PROP_PORTERTARGETGROUP_METHOD_1_97DE7C3636D927FC_OFFSET UNITYSDK_OFFSET(0xDCF7250)
#define RPG_CLIENT_PROP_PORTERTARGETGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xDCF7E30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PorterTargetGroup_TypeDefinitionIndex = 78305;

	class PorterTargetGroup : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::Prop::PorterTarget*>* Targets; // 0x10
		::RPG::Client::Prop::PorterPuzzle* _OwnerRef; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGETGROUP__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_65FF2FB4CA0B10B5(::RPG::Client::Prop::PorterTargetGroup* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::PorterTargetGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGETGROUP_METHOD_1_65FF2FB4CA0B10B5_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::PorterTarget* Method_1_7EB98D7683D8A8D4(::System::Int32 a1)
		{
			return ((::RPG::Client::Prop::PorterTarget*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGETGROUP_METHOD_1_7EB98D7683D8A8D4_OFFSET))(this, a1);
		}

		::System::Void Method_1_97DE7C3636D927FC(::RPG::Client::Prop::PorterPuzzle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PorterPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGETGROUP_METHOD_1_97DE7C3636D927FC_OFFSET))(this, a1);
		}

		::System::Void Method_1_2C95AFAD0256302F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGETGROUP_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
		}

		::System::Void Method_1_2EDEE9BCD5AAB2CD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGETGROUP_METHOD_1_2EDEE9BCD5AAB2CD_OFFSET))(this, a1);
		}
	};
}
