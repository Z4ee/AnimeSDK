#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiAtomConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MIACTIONCONFIGBASE_METHOD_3_37C755762C9473BD_OFFSET UNITYSDK_OFFSET(0x173DB010)
#define RPG_GAMECORE_MIACTIONCONFIGBASE_METHOD_3_6FB2DB6F1F02CC80_OFFSET UNITYSDK_OFFSET(0x173DB1D0)
#define RPG_GAMECORE_MIACTIONCONFIGBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x173DB290)
#define RPG_GAMECORE_MIACTIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x173DB270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiActionConfigBase_TypeDefinitionIndex = 15633;

	class MiActionConfigBase : public ::RPG::GameCore::MiAtomConfigBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiActionConfigBase*>*>** StaticGet__FromBinary_MiActionConfigBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiActionConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiActionConfigBase_TypeDefinitionIndex)->GetStaticField(0x29A00);
		}
		::System::String* MiActionUniqueID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIACTIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIACTIONCONFIGBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_3_37C755762C9473BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiActionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiActionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIACTIONCONFIGBASE_METHOD_3_37C755762C9473BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6FB2DB6F1F02CC80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiActionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIACTIONCONFIGBASE_METHOD_3_6FB2DB6F1F02CC80_OFFSET))(a1, a2);
		}
	};
}
