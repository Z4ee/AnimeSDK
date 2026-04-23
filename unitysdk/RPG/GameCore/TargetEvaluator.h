#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TARGETEVALUATOR_METHOD_3_1A48AD11003A8869_OFFSET UNITYSDK_OFFSET(0x18EC9AE0)
#define RPG_GAMECORE_TARGETEVALUATOR_METHOD_3_BC6C782BC059E53C_OFFSET UNITYSDK_OFFSET(0x18ED3CD0)
#define RPG_GAMECORE_TARGETEVALUATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x18ED3D40)
#define RPG_GAMECORE_TARGETEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED32E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetEvaluator_TypeDefinitionIndex = 22729;

	class TargetEvaluator : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetEvaluator*>*>** StaticGet__FromBinary_TargetEvaluator_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetEvaluator*>*>**)Il2CppClass::FromTypeDefinitionIndex(TargetEvaluator_TypeDefinitionIndex)->GetStaticField(0x56E50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR__CCTOR_OFFSET))();
		}

		static ::System::Void Method_3_1A48AD11003A8869(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetEvaluator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetEvaluator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR_METHOD_3_1A48AD11003A8869_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BC6C782BC059E53C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetEvaluator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR_METHOD_3_BC6C782BC059E53C_OFFSET))(a1, a2);
		}
	};
}
