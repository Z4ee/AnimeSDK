#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVWAITINGEVENTBASE_METHOD_3_89027FBB497168C7_OFFSET UNITYSDK_OFFSET(0x18668D00)
#define RPG_GAMECORE_ADVWAITINGEVENTBASE_METHOD_3_DA370B14F7FBDB2B_OFFSET UNITYSDK_OFFSET(0x18668B40)
#define RPG_GAMECORE_ADVWAITINGEVENTBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18668E70)
#define RPG_GAMECORE_ADVWAITINGEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18668E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvWaitingEventBase_TypeDefinitionIndex = 19662;

	class AdvWaitingEventBase : public ::RPG::GameCore::TaskConfig
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvWaitingEventBase*>*>** StaticGet__FromBinary_AdvWaitingEventBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvWaitingEventBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(AdvWaitingEventBase_TypeDefinitionIndex)->GetStaticField(0x6550);
		}
		::System::Boolean IsLoop; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITINGEVENTBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITINGEVENTBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_3_DA370B14F7FBDB2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvWaitingEventBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvWaitingEventBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITINGEVENTBASE_METHOD_3_DA370B14F7FBDB2B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_89027FBB497168C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvWaitingEventBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvWaitingEventBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITINGEVENTBASE_METHOD_3_89027FBB497168C7_OFFSET))(a1, a2);
		}
	};
}
