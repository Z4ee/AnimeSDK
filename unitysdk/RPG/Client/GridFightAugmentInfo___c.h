#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightAugment; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADB5D90)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB5DD0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__GET_PLAYERAUGMENTSWITHOUTEXTRA_B__5_0_OFFSET UNITYSDK_OFFSET(0x1ADB5DE0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__REMOVEALLAUGMENT_B__18_0_OFFSET UNITYSDK_OFFSET(0x1ADB5E00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentInfo___c_TypeDefinitionIndex = 64439;

	class GridFightAugmentInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightAugmentInfo___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightAugmentInfo___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugmentInfo___c_TypeDefinitionIndex)->GetStaticField(0x1B700);
		}
		static ::System::Action_1<::RPG::Client::GridFightAugment*>** StaticGet___9__18_0()
		{
			return (::System::Action_1<::RPG::Client::GridFightAugment*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugmentInfo___c_TypeDefinitionIndex)->GetStaticField(0x1B708);
		}
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugmentInfo___c_TypeDefinitionIndex)->GetStaticField(0x1B710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_PlayerAugmentsWithoutExtra_b__5_0(::RPG::Client::GridFightAugment* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__GET_PLAYERAUGMENTSWITHOUTEXTRA_B__5_0_OFFSET))(this, a1);
		}

		::System::Void _RemoveAllAugment_b__18_0(::RPG::Client::GridFightAugment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__REMOVEALLAUGMENT_B__18_0_OFFSET))(this, a1);
		}
	};
}
