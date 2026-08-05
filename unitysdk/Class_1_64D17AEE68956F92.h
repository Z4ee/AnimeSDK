#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class Class_0_16E4307DCC419505_683;
namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }
template <typename T> class Class_0_16E4307DCC41950C_30;

#define CLASS_1_64D17AEE68956F92_METHOD_1_4D5CC0F66E79C0D2_OFFSET UNITYSDK_OFFSET(0x1D336150)
#define CLASS_1_64D17AEE68956F92_METHOD_1_4DF33F3F07D7413E_OFFSET UNITYSDK_OFFSET(0x1D336330)
#define CLASS_1_64D17AEE68956F92_METHOD_1_6EA20BBAC0A40A02_OFFSET UNITYSDK_OFFSET(0x1D336700)
#define CLASS_1_64D17AEE68956F92_METHOD_1_8A1D03FB7D92ACA9_OFFSET UNITYSDK_OFFSET(0x1D336590)
#define CLASS_1_64D17AEE68956F92_METHOD_1_9FC4279A64DAF3CA_OFFSET UNITYSDK_OFFSET(0x1D335EB0)

inline static constexpr unsigned int Class_1_64D17AEE68956F92_TypeDefinitionIndex = 80079;

class Class_1_64D17AEE68956F92 : public ::System::Object
{
public:
	static ::System::Void Method_1_9FC4279A64DAF3CA(::Foundation::Unreal::FTransform3D& a1, ::Foundation::Unreal::FTransform3D& a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Foundation::Unreal::FTransform3D&, ::Foundation::Unreal::FTransform3D&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_64D17AEE68956F92_METHOD_1_9FC4279A64DAF3CA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_4D5CC0F66E79C0D2(::Foundation::Unreal::FTransform3D& a1, ::Foundation::Unreal::FTransform3D& a2)
	{
		return ((::System::Void(*)(::Foundation::Unreal::FTransform3D&, ::Foundation::Unreal::FTransform3D&))((::PBYTE)hIl2Cpp + CLASS_1_64D17AEE68956F92_METHOD_1_4D5CC0F66E79C0D2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4DF33F3F07D7413E(::Class_0_16E4307DCC419505_683* a1, ::System::Int32& a2, ::UnityEngine::Animator* a3, ::MoleMole::Photo::Skeleton* a4, ::Foundation::NativeMemoryBuilder* a5, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> a6)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_683*, ::System::Int32&, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + CLASS_1_64D17AEE68956F92_METHOD_1_4DF33F3F07D7413E_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::Unity::Collections::NativeArray_1<::Foundation::NativeMemoryRequestHandle> Method_1_8A1D03FB7D92ACA9(::System::Int32 a1, ::Unity::Collections::Allocator a2)
	{
		return ((::Unity::Collections::NativeArray_1<::Foundation::NativeMemoryRequestHandle>(*)(::System::Int32, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + CLASS_1_64D17AEE68956F92_METHOD_1_8A1D03FB7D92ACA9_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::Foundation::NativeMemoryRequestHandle>* Method_1_6EA20BBAC0A40A02(::System::Int32 a1)
	{
		return ((::Il2CppArray<::Foundation::NativeMemoryRequestHandle>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_64D17AEE68956F92_METHOD_1_6EA20BBAC0A40A02_OFFSET))(a1);
	}
};
