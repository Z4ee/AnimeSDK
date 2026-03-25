#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CAKERACEACTIONBASE_METHOD_2_1FA550A1BB0E6826_OFFSET UNITYSDK_OFFSET(0x17042390)
#define RPG_GAMECORE_CAKERACEACTIONBASE_METHOD_2_C01912DEA5DCFAF5_OFFSET UNITYSDK_OFFSET(0x17042510)
#define RPG_GAMECORE_CAKERACEACTIONBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17042570)
#define RPG_GAMECORE_CAKERACEACTIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x170421B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionBase_TypeDefinitionIndex = 16827;

	class CakeRaceActionBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionBase*>*>** StaticGet__FromBinary_CakeRaceActionBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceActionBase_TypeDefinitionIndex)->GetStaticField(0x253A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_2_1FA550A1BB0E6826(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONBASE_METHOD_2_1FA550A1BB0E6826_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C01912DEA5DCFAF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONBASE_METHOD_2_C01912DEA5DCFAF5_OFFSET))(a1, a2);
		}
	};
}
