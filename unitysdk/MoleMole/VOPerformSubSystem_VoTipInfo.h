#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIBubbleTips; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM_VOTIPINFO_MARK_OFFSET UNITYSDK_OFFSET(0x6961E0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_VOTIPINFO_ONFINISH_OFFSET UNITYSDK_OFFSET(0x6961F0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_VOTIPINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0xF80DDF0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_VOTIPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x696130)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem_VoTipInfo_TypeDefinitionIndex = 54631;

	struct alignas(8) VOPerformSubSystem_VoTipInfo
	{
		static ::System::Int32* StaticGet_ID_Gen()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VOPerformSubSystem_VoTipInfo_TypeDefinitionIndex)->GetStaticField(0x10DD0);
		}
		::System::Int32 tipID; // 0x10
		::System::String* tipTag; // 0x18
		::System::String* tipParam; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* tipParamList; // 0x28
		::MoleMole::UIBubbleTips* TipShowObj; // 0x30
		::System::Boolean showWhenMiddleTip; // 0x38
		::System::Int32 tipUID; // 0x3C
		::System::Boolean IsFinished; // 0x40

		::System::Void _ctor(::System::Int32 tipID, ::System::String* tipTag, ::System::String* tipParam, ::System::Collections::Generic::List_1<::System::String*>* tipParamList, ::System::Boolean showWhenMiddleTip)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_VOTIPINFO__CTOR_OFFSET))(this, tipID, tipTag, tipParam, tipParamList, showWhenMiddleTip);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_VOTIPINFO__CCTOR_OFFSET))();
		}

		::System::Void Mark(::MoleMole::UIBubbleTips* tObj)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBubbleTips*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_VOTIPINFO_MARK_OFFSET))(this, tObj);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_VOTIPINFO_ONFINISH_OFFSET))(this);
		}
	};
}
