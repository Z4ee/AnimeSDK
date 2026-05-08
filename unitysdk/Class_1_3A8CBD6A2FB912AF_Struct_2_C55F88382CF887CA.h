#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3A8CBD6A2FB912AF_Enum_3_ED385E881797DAB1.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariableArray_1.h"
#include "unitysdk/PipelineCamera/Optional_1.h"
#include "unitysdk/Struct_2_6E1B724B14572104_5.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/PropertyStreamHandle.h"

#define CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_08FDE86065712E33_1_OFFSET UNITYSDK_OFFSET(0x775050)
#define CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_08FDE86065712E33_2_OFFSET UNITYSDK_OFFSET(0x775090)
#define CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_08FDE86065712E33_OFFSET UNITYSDK_OFFSET(0x774FD0)
#define CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_1BD71C0E8C126251_OFFSET UNITYSDK_OFFSET(0x774F50)
#define CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_1F8314262457963A_OFFSET UNITYSDK_OFFSET(0x774F60)
#define CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x774FF0)
#define CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_5489F9CD0AA85DE6_OFFSET UNITYSDK_OFFSET(0x774EE0)
#define CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x775080)
#define CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_79FF623EA483C79E_OFFSET UNITYSDK_OFFSET(0x775000)
#define CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_AD36E378507B7451_OFFSET UNITYSDK_OFFSET(0x775070)
#define CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_C3B21C74C45D6F86_OFFSET UNITYSDK_OFFSET(0x774F10)
#define CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_D952E023BC6CDE3E_OFFSET UNITYSDK_OFFSET(0x774F80)
#define CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x774E60)
#define CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x774EA0)
#define CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA__CTOR_OFFSET UNITYSDK_OFFSET(0x774DC0)

inline static constexpr unsigned int Class_1_3A8CBD6A2FB912AF_Struct_2_C55F88382CF887CA_TypeDefinitionIndex = 72948;

struct alignas(8) Class_1_3A8CBD6A2FB912AF_Struct_2_C55F88382CF887CA
{
	::Foundation::ReadOnlyNativeVariableArray_1<::UnityEngine::Animations::PropertyStreamHandle> Field_2_0; // 0x10
	::Foundation::NativeVariableArray_1<::System::Single> Field_2_1; // 0x20
	::Foundation::NativeVariableArray_1<::System::Single> Field_2_2; // 0x30
	::Class_1_3A8CBD6A2FB912AF_Enum_3_ED385E881797DAB1 Field_2_3; // 0x40
	::System::Single Field_2_4; // 0x44
	::System::Single Field_2_5; // 0x48
	::System::Single Field_2_6; // 0x4C
	::Struct_2_ACD0EF80A5330786 Field_2_7; // 0x50
	::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_6E1B724B14572104_5>> Field_2_8; // 0xE0

	::System::Void _ctor(::Foundation::NativeVariableArray_1<::System::Single> a1, ::Foundation::NativeVariableArray_1<::System::Single> a2, ::Struct_2_ACD0EF80A5330786 a3, ::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_6E1B724B14572104_5>> a4, ::Foundation::ReadOnlyNativeVariableArray_1<::UnityEngine::Animations::PropertyStreamHandle> a5)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeVariableArray_1<::System::Single>, ::Foundation::NativeVariableArray_1<::System::Single>, ::Struct_2_ACD0EF80A5330786, ::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_6E1B724B14572104_5>>, ::Foundation::ReadOnlyNativeVariableArray_1<::UnityEngine::Animations::PropertyStreamHandle>))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	/*
	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_PROCESSANIMATION_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_PROCESSROOTMOTION_OFFSET))(this, a1);
	}
	*/

	/*
	::UnityEngine::Animations::AnimationScriptPlayable Method_2_5489F9CD0AA85DE6(::UnityEngine::Playables::PlayableGraph a1)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_5489F9CD0AA85DE6_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Boolean Method_2_C3B21C74C45D6F86(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_C3B21C74C45D6F86_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_1BD71C0E8C126251()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_1BD71C0E8C126251_OFFSET))(this);
	}

	::Struct_2_ACD0EF80A5330786 Method_2_1F8314262457963A()
	{
		return ((::Struct_2_ACD0EF80A5330786(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_1F8314262457963A_OFFSET))(this);
	}

	/*
	::Unity::Collections::NativeArray_1<::System::Single> Method_2_D952E023BC6CDE3E(::UnityEngine::Animations::AnimationStream a1)
	{
		return ((::Unity::Collections::NativeArray_1<::System::Single>(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_D952E023BC6CDE3E_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void Method_2_08FDE86065712E33(::Unity::Collections::NativeArray_1<::System::Single> a1)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_08FDE86065712E33_OFFSET))(this, a1);
	}
	*/

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	/*
	::System::Void Method_2_79FF623EA483C79E(::UnityEngine::Animations::AnimationStream a1, ::Unity::Collections::NativeArray_1<::System::Single> a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_79FF623EA483C79E_OFFSET))(this, a1, a2);
	}
	*/

	/*
	::System::Void Method_2_08FDE86065712E33_1(::Unity::Collections::NativeArray_1<::System::Single> a1)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_08FDE86065712E33_1_OFFSET))(this, a1);
	}
	*/

	::System::Void Method_2_AD36E378507B7451()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_AD36E378507B7451_OFFSET))(this);
	}

	::System::Void Method_2_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	/*
	::System::Void Method_2_08FDE86065712E33_2(::Unity::Collections::NativeArray_1<::System::Single> a1)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_3A8CBD6A2FB912AF_STRUCT_2_C55F88382CF887CA_METHOD_2_08FDE86065712E33_2_OFFSET))(this, a1);
	}
	*/
};
