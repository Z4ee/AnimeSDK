#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7291C38274750BA2_2;
class Class_1_8D3D409EBF3F1CE0_Class_1_7C59543FCB5D1836;
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_8D3D409EBF3F1CE0_METHOD_1_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x16A0F030)
#define CLASS_1_8D3D409EBF3F1CE0_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x16A0F310)
#define CLASS_1_8D3D409EBF3F1CE0_METHOD_1_B53CFCBA619F4D88_OFFSET UNITYSDK_OFFSET(0x16A0F430)
#define CLASS_1_8D3D409EBF3F1CE0_METHOD_1_CBEC3D46FB49224D_OFFSET UNITYSDK_OFFSET(0x16A0EE80)
#define CLASS_1_8D3D409EBF3F1CE0_METHOD_1_FA8E4FF37436CC1A_OFFSET UNITYSDK_OFFSET(0x16A0EF10)
#define CLASS_1_8D3D409EBF3F1CE0__CTOR_OFFSET UNITYSDK_OFFSET(0x16A0FA60)

inline static constexpr unsigned int Class_1_8D3D409EBF3F1CE0_TypeDefinitionIndex = 63760;

class Class_1_8D3D409EBF3F1CE0 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x14; // 0x0
	::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>*>* Field_1_1; // 0x10
	::System::Collections::Generic::Queue_1<::Class_1_8D3D409EBF3F1CE0_Class_1_7C59543FCB5D1836*>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>* Field_1_3; // 0x20
	::System::Int32 Field_1_4; // 0x28
	::System::Boolean Field_1_5; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D3D409EBF3F1CE0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CBEC3D46FB49224D(::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>* a1, ::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>*, ::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_8D3D409EBF3F1CE0_METHOD_1_CBEC3D46FB49224D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FA8E4FF37436CC1A(::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>* a1, ::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>*, ::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_2*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_8D3D409EBF3F1CE0_METHOD_1_FA8E4FF37436CC1A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D3D409EBF3F1CE0_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D3D409EBF3F1CE0_METHOD_1_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_1_B53CFCBA619F4D88(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8D3D409EBF3F1CE0_METHOD_1_B53CFCBA619F4D88_OFFSET))(this, a1);
	}
};
