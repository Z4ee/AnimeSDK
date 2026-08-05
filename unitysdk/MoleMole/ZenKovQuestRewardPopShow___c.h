#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_0D6706375CDAAE8C;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_ZENKOVQUESTREWARDPOPSHOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B216E0)
#define MOLEMOLE_ZENKOVQUESTREWARDPOPSHOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B21720)
#define MOLEMOLE_ZENKOVQUESTREWARDPOPSHOW___C__ONPROCESS_B__4_0_OFFSET UNITYSDK_OFFSET(0x15B21730)

namespace MoleMole
{
	inline static constexpr unsigned int ZenKovQuestRewardPopShow___c_TypeDefinitionIndex = 89598;

	class ZenKovQuestRewardPopShow___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_0D6706375CDAAE8C*, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::Class_1_0D6706375CDAAE8C*, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(ZenKovQuestRewardPopShow___c_TypeDefinitionIndex)->GetStaticField(0x42F90);
		}
		static ::MoleMole::ZenKovQuestRewardPopShow___c** StaticGet___9()
		{
			return (::MoleMole::ZenKovQuestRewardPopShow___c**)Il2CppClass::FromTypeDefinitionIndex(ZenKovQuestRewardPopShow___c_TypeDefinitionIndex)->GetStaticField(0x42F98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTREWARDPOPSHOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTREWARDPOPSHOW___C__CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> _OnProcess_b__4_0(::Class_1_0D6706375CDAAE8C* item)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTREWARDPOPSHOW___C__ONPROCESS_B__4_0_OFFSET))(this, item);
		}
	};
}
