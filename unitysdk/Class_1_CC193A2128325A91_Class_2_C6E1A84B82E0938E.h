#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CC193A2128325A91_Class_1_0C685145B0BA45FD.h"
#include "unitysdk/Enum_3_4575C22302066CAE.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/Struct_2_295094A66D5C0F60.h"

class Class_1_CC193A2128325A91;
class Class_2_EB371C0ADFD560F1_Class_1_9A90CD018E72DF20_2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Material; }

#define CLASS_1_CC193A2128325A91_CLASS_2_C6E1A84B82E0938E_METHOD_2_083AF6A87259F920_OFFSET UNITYSDK_OFFSET(0x14B921A0)
#define CLASS_1_CC193A2128325A91_CLASS_2_C6E1A84B82E0938E_METHOD_2_23C3681AC9E5D438_OFFSET UNITYSDK_OFFSET(0x14B918F0)
#define CLASS_1_CC193A2128325A91_CLASS_2_C6E1A84B82E0938E_METHOD_2_71A574FDFADAF7D2_OFFSET UNITYSDK_OFFSET(0x14B92870)
#define CLASS_1_CC193A2128325A91_CLASS_2_C6E1A84B82E0938E_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x14B91790)
#define CLASS_1_CC193A2128325A91_CLASS_2_C6E1A84B82E0938E_METHOD_2_B2FDF0FF4AD37B0F_OFFSET UNITYSDK_OFFSET(0x14B92000)
#define CLASS_1_CC193A2128325A91_CLASS_2_C6E1A84B82E0938E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14B927F0)
#define CLASS_1_CC193A2128325A91_CLASS_2_C6E1A84B82E0938E_METHOD_2_ED894B75AD10FA28_OFFSET UNITYSDK_OFFSET(0x14B919D0)
#define CLASS_1_CC193A2128325A91_CLASS_2_C6E1A84B82E0938E__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B92570)
#define CLASS_1_CC193A2128325A91_CLASS_2_C6E1A84B82E0938E__CTOR_OFFSET UNITYSDK_OFFSET(0x14B92460)

inline static constexpr unsigned int Class_1_CC193A2128325A91_Class_2_C6E1A84B82E0938E_TypeDefinitionIndex = 46810;

class Class_1_CC193A2128325A91_Class_2_C6E1A84B82E0938E : public ::Class_1_CC193A2128325A91_Class_1_0C685145B0BA45FD
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>** StaticGet_Field_2_9()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC193A2128325A91_Class_2_C6E1A84B82E0938E_TypeDefinitionIndex)->GetStaticField(0x4B580);
	}
	::System::String* Field_2_7; // 0x60
	::System::String* Field_2_6; // 0x68
	::UnityEngine::Animation* Field_2_1; // 0x70
	::Class_2_EB371C0ADFD560F1_Class_1_9A90CD018E72DF20_2* Field_2_2; // 0x78
	::UnityEngine::Material* Field_2_0; // 0x80
	::System::String* Field_2_4; // 0x88
	::System::String* Field_2_5; // 0x90
	::System::Int32 Field_2_11; // 0x98
	::Foundation::Coroutine::CoroutineHandle Field_2_10; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC193A2128325A91_CLASS_2_C6E1A84B82E0938E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC193A2128325A91_CLASS_2_C6E1A84B82E0938E__CCTOR_OFFSET))();
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC193A2128325A91_CLASS_2_C6E1A84B82E0938E_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_23C3681AC9E5D438()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC193A2128325A91_CLASS_2_C6E1A84B82E0938E_METHOD_2_23C3681AC9E5D438_OFFSET))(this);
	}

	::System::Void Method_2_ED894B75AD10FA28(::Class_1_CC193A2128325A91* a1, ::Struct_2_295094A66D5C0F60& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC193A2128325A91*, ::Struct_2_295094A66D5C0F60&))((::PBYTE)hIl2Cpp + CLASS_1_CC193A2128325A91_CLASS_2_C6E1A84B82E0938E_METHOD_2_ED894B75AD10FA28_OFFSET))(this, a1, a2);
	}

	::Foundation::AssetPath Method_2_B2FDF0FF4AD37B0F(::System::Int32 a1, ::Share::EAvatarSkillType a2)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::System::Int32, ::Share::EAvatarSkillType))((::PBYTE)hIl2Cpp + CLASS_1_CC193A2128325A91_CLASS_2_C6E1A84B82E0938E_METHOD_2_B2FDF0FF4AD37B0F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC193A2128325A91_CLASS_2_C6E1A84B82E0938E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Foundation::AssetPath>* Method_2_71A574FDFADAF7D2(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CC193A2128325A91_CLASS_2_C6E1A84B82E0938E_METHOD_2_71A574FDFADAF7D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_083AF6A87259F920(::System::Int32 a1, ::System::Int32 a2, ::Enum_3_4575C22302066CAE a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Enum_3_4575C22302066CAE))((::PBYTE)hIl2Cpp + CLASS_1_CC193A2128325A91_CLASS_2_C6E1A84B82E0938E_METHOD_2_083AF6A87259F920_OFFSET))(this, a1, a2, a3);
	}
};
