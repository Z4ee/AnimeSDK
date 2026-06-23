#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_937E293343525B21.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

class Class_1_A191518F735366A8;
class Class_1_BF85135934DD45B5;
class Class_1_E3019CE6003C7D3C;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RenderTexture; }

#define CLASS_1_30CE0306623609F9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x16352BD0)
#define CLASS_1_30CE0306623609F9_METHOD_1_379FAD2C57895DB8_OFFSET UNITYSDK_OFFSET(0x163523D0)
#define CLASS_1_30CE0306623609F9_METHOD_1_47651CF562C035A2_1_OFFSET UNITYSDK_OFFSET(0x16352090)
#define CLASS_1_30CE0306623609F9_METHOD_1_47651CF562C035A2_2_OFFSET UNITYSDK_OFFSET(0x16352790)
#define CLASS_1_30CE0306623609F9_METHOD_1_47651CF562C035A2_3_OFFSET UNITYSDK_OFFSET(0x16352AA0)
#define CLASS_1_30CE0306623609F9_METHOD_1_47651CF562C035A2_OFFSET UNITYSDK_OFFSET(0x16351BD0)
#define CLASS_1_30CE0306623609F9_METHOD_1_50952DBE0A527AC0_1_OFFSET UNITYSDK_OFFSET(0x16352530)
#define CLASS_1_30CE0306623609F9_METHOD_1_50952DBE0A527AC0_2_OFFSET UNITYSDK_OFFSET(0x163521C0)
#define CLASS_1_30CE0306623609F9_METHOD_1_50952DBE0A527AC0_OFFSET UNITYSDK_OFFSET(0x16351E90)
#define CLASS_1_30CE0306623609F9_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x163519D0)
#define CLASS_1_30CE0306623609F9_METHOD_1_984391A45F26DFC1_OFFSET UNITYSDK_OFFSET(0x163519E0)
#define CLASS_1_30CE0306623609F9_METHOD_1_B57EC84B10E068A8_OFFSET UNITYSDK_OFFSET(0x163528C0)
#define CLASS_1_30CE0306623609F9_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x16352730)
#define CLASS_1_30CE0306623609F9_METHOD_1_FAFB7C6AE837D748_OFFSET UNITYSDK_OFFSET(0x16351D00)
#define CLASS_1_30CE0306623609F9__CTOR_OFFSET UNITYSDK_OFFSET(0x163519C0)

inline static constexpr unsigned int Class_1_30CE0306623609F9_TypeDefinitionIndex = 77841;

class Class_1_30CE0306623609F9 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	::Class_1_A191518F735366A8* Field_1_3; // 0x10
	::Class_1_E3019CE6003C7D3C* Field_1_2; // 0x18
	::Class_1_BF85135934DD45B5* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_A191518F735366A8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A191518F735366A8*))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_984391A45F26DFC1(::UnityEngine::RenderTexture* a1, ::Enum_3_937E293343525B21 a2, ::Class_1_E3019CE6003C7D3C*& a3, ::Class_1_A191518F735366A8* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::Enum_3_937E293343525B21, ::Class_1_E3019CE6003C7D3C*&, ::Class_1_A191518F735366A8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_METHOD_1_984391A45F26DFC1_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_47651CF562C035A2(::UnityEngine::RenderTexture* a1, ::System::String* a2, ::System::Action_1<::Class_1_A191518F735366A8*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::System::String*, ::System::Action_1<::Class_1_A191518F735366A8*>*))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_METHOD_1_47651CF562C035A2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_47651CF562C035A2_1(::UnityEngine::RenderTexture* a1, ::System::String* a2, ::System::Action_1<::Class_1_A191518F735366A8*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::System::String*, ::System::Action_1<::Class_1_A191518F735366A8*>*))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_METHOD_1_47651CF562C035A2_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_50952DBE0A527AC0(::System::String* a1, ::Class_1_E3019CE6003C7D3C*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_E3019CE6003C7D3C*&))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_METHOD_1_50952DBE0A527AC0_OFFSET))(this, a1, a2);
	}

	static ::Unity::Collections::NativeArray_1<::System::Byte> Method_1_379FAD2C57895DB8(::Unity::Collections::NativeArray_1<::System::Byte> a1, ::UnityEngine::RenderTexture* a2, ::Enum_3_937E293343525B21 a3)
	{
		return ((::Unity::Collections::NativeArray_1<::System::Byte>(*)(::Unity::Collections::NativeArray_1<::System::Byte>, ::UnityEngine::RenderTexture*, ::Enum_3_937E293343525B21))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_METHOD_1_379FAD2C57895DB8_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_50952DBE0A527AC0_1(::System::String* a1, ::Class_1_E3019CE6003C7D3C*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_E3019CE6003C7D3C*&))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_METHOD_1_50952DBE0A527AC0_1_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}

	::System::Void Method_1_47651CF562C035A2_2(::UnityEngine::RenderTexture* a1, ::System::String* a2, ::System::Action_1<::Class_1_A191518F735366A8*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::System::String*, ::System::Action_1<::Class_1_A191518F735366A8*>*))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_METHOD_1_47651CF562C035A2_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FAFB7C6AE837D748(::System::Boolean a1, ::System::Action_1<::Class_1_A191518F735366A8*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action_1<::Class_1_A191518F735366A8*>*))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_METHOD_1_FAFB7C6AE837D748_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B57EC84B10E068A8(::System::String* a1, ::Class_1_E3019CE6003C7D3C*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_E3019CE6003C7D3C*&))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_METHOD_1_B57EC84B10E068A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_47651CF562C035A2_3(::UnityEngine::RenderTexture* a1, ::System::String* a2, ::System::Action_1<::Class_1_A191518F735366A8*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::System::String*, ::System::Action_1<::Class_1_A191518F735366A8*>*))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_METHOD_1_47651CF562C035A2_3_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_A191518F735366A8* Method_1_24748FC20F375725()
	{
		return ((::Class_1_A191518F735366A8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_50952DBE0A527AC0_2(::System::String* a1, ::Class_1_E3019CE6003C7D3C*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_E3019CE6003C7D3C*&))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_METHOD_1_50952DBE0A527AC0_2_OFFSET))(this, a1, a2);
	}
};
