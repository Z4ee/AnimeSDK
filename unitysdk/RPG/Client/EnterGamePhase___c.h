#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ENTERGAMEPHASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB90F500)
#define RPG_CLIENT_ENTERGAMEPHASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB90F530)
#define RPG_CLIENT_ENTERGAMEPHASE___C___STARTLOGIN_B__27_0_OFFSET UNITYSDK_OFFSET(0xB90F610)
#define RPG_CLIENT_ENTERGAMEPHASE___C___SUBPACKAGECHECKED_B__15_1_OFFSET UNITYSDK_OFFSET(0xB90F540)

namespace RPG::Client
{
	inline static constexpr unsigned int EnterGamePhase___c_TypeDefinitionIndex = 57153;

	class EnterGamePhase___c : public ::System::Object
	{
	public:
		static ::RPG::Client::EnterGamePhase___c** StaticGet___9()
		{
			return (::RPG::Client::EnterGamePhase___c**)Il2CppClass::FromTypeDefinitionIndex(EnterGamePhase___c_TypeDefinitionIndex)->GetStaticField(0x127A0);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__15_1()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EnterGamePhase___c_TypeDefinitionIndex)->GetStaticField(0x127A8);
		}
		static ::System::Action** StaticGet___9__27_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EnterGamePhase___c_TypeDefinitionIndex)->GetStaticField(0x127B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE___C__CTOR_OFFSET))(this);
		}

		::System::Void __SubPackageChecked_b__15_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE___C___SUBPACKAGECHECKED_B__15_1_OFFSET))(this, a1);
		}

		::System::Void __StartLogin_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE___C___STARTLOGIN_B__27_0_OFFSET))(this);
		}
	};
}
