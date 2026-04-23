#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TARGETSEQOPERATION_METHOD_2_117856C3404BBC11_OFFSET UNITYSDK_OFFSET(0x18EEA5C0)
#define RPG_GAMECORE_TARGETSEQOPERATION_METHOD_2_9C4C5D2174678974_OFFSET UNITYSDK_OFFSET(0x18EEA740)
#define RPG_GAMECORE_TARGETSEQOPERATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x18EEA7A0)
#define RPG_GAMECORE_TARGETSEQOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED3D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSeqOperation_TypeDefinitionIndex = 22727;

	class TargetSeqOperation : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSeqOperation*>*>** StaticGet__FromBinary_TargetSeqOperation_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSeqOperation*>*>**)Il2CppClass::FromTypeDefinitionIndex(TargetSeqOperation_TypeDefinitionIndex)->GetStaticField(0x5A610);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQOPERATION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQOPERATION__CCTOR_OFFSET))();
		}

		static ::System::Void Method_2_117856C3404BBC11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSeqOperation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSeqOperation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQOPERATION_METHOD_2_117856C3404BBC11_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_9C4C5D2174678974(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSeqOperation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSeqOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQOPERATION_METHOD_2_9C4C5D2174678974_OFFSET))(a1, a2);
		}
	};
}
