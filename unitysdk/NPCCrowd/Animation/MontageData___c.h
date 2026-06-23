#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/MontageRawData.h"
#include "unitysdk/NPCCrowd/Animation/MontageSeqFrameRawData.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_MONTAGEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBDA8D0)
#define NPCCROWD_ANIMATION_MONTAGEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEBDA910)
#define NPCCROWD_ANIMATION_MONTAGEDATA___C__GETLENGTH_B__3_1_OFFSET UNITYSDK_OFFSET(0xEBDA920)
#define NPCCROWD_ANIMATION_MONTAGEDATA___C__GETLENGTH_B__3_2_OFFSET UNITYSDK_OFFSET(0xEBDAA80)
#define NPCCROWD_ANIMATION_MONTAGEDATA___C__GETLENGTH_B__3_3_OFFSET UNITYSDK_OFFSET(0xEBDAA20)
#define NPCCROWD_ANIMATION_MONTAGEDATA___C__GETLENGTH_B__3_4_OFFSET UNITYSDK_OFFSET(0xEBDAB80)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageData___c_TypeDefinitionIndex = 68348;

	class MontageData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageRawData>*, ::System::Single>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageRawData>*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MontageData___c_TypeDefinitionIndex)->GetStaticField(0x318C0);
		}
		static ::System::Func_2<::NPCCrowd::Animation::MontageSeqFrameRawData, ::System::Single>** StaticGet___9__3_4()
		{
			return (::System::Func_2<::NPCCrowd::Animation::MontageSeqFrameRawData, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MontageData___c_TypeDefinitionIndex)->GetStaticField(0x318C8);
		}
		static ::System::Func_2<::NPCCrowd::Animation::MontageRawData, ::System::Single>** StaticGet___9__3_3()
		{
			return (::System::Func_2<::NPCCrowd::Animation::MontageRawData, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MontageData___c_TypeDefinitionIndex)->GetStaticField(0x318D0);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageSeqFrameRawData>*, ::System::Single>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageSeqFrameRawData>*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MontageData___c_TypeDefinitionIndex)->GetStaticField(0x318D8);
		}
		static ::NPCCrowd::Animation::MontageData___c** StaticGet___9()
		{
			return (::NPCCrowd::Animation::MontageData___c**)Il2CppClass::FromTypeDefinitionIndex(MontageData___c_TypeDefinitionIndex)->GetStaticField(0x318E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Single _GetLength_b__3_1(::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageRawData>* trackData)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageRawData>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGEDATA___C__GETLENGTH_B__3_1_OFFSET))(this, trackData);
		}

		::System::Single _GetLength_b__3_3(::NPCCrowd::Animation::MontageRawData t)
		{
			return ((::System::Single(*)(::PVOID, ::NPCCrowd::Animation::MontageRawData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGEDATA___C__GETLENGTH_B__3_3_OFFSET))(this, t);
		}

		::System::Single _GetLength_b__3_2(::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageSeqFrameRawData>* trackData)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageSeqFrameRawData>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGEDATA___C__GETLENGTH_B__3_2_OFFSET))(this, trackData);
		}

		::System::Single _GetLength_b__3_4(::NPCCrowd::Animation::MontageSeqFrameRawData t)
		{
			return ((::System::Single(*)(::PVOID, ::NPCCrowd::Animation::MontageSeqFrameRawData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGEDATA___C__GETLENGTH_B__3_4_OFFSET))(this, t);
		}
	};
}
