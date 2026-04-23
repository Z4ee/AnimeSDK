#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MIATOMCONFIGBASE_METHOD_2_2D24AF303372A1DB_OFFSET UNITYSDK_OFFSET(0x18AFAFD0)
#define RPG_GAMECORE_MIATOMCONFIGBASE_METHOD_2_C490B302946A94D9_OFFSET UNITYSDK_OFFSET(0x18AFAE10)
#define RPG_GAMECORE_MIATOMCONFIGBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AFB030)
#define RPG_GAMECORE_MIATOMCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE9960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiAtomConfigBase_TypeDefinitionIndex = 16153;

	class MiAtomConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiAtomConfigBase*>*>** StaticGet__FromBinary_MiAtomConfigBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiAtomConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiAtomConfigBase_TypeDefinitionIndex)->GetStaticField(0x3C8B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIATOMCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIATOMCONFIGBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_2_C490B302946A94D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiAtomConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiAtomConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIATOMCONFIGBASE_METHOD_2_C490B302946A94D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_2D24AF303372A1DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiAtomConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiAtomConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIATOMCONFIGBASE_METHOD_2_2D24AF303372A1DB_OFFSET))(a1, a2);
		}
	};
}
