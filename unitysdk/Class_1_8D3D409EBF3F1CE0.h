#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7291C38274750BA2_2;
class Class_1_8D3D409EBF3F1CE0_Class_1_7C59543FCB5D1836;
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_8D3D409EBF3F1CE0_METHOD_1_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0xAAA4BA0)
#define CLASS_1_8D3D409EBF3F1CE0_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xAAA4E20)
#define CLASS_1_8D3D409EBF3F1CE0_METHOD_1_CBEC3D46FB49224D_OFFSET UNITYSDK_OFFSET(0xAAA49F0)
#define CLASS_1_8D3D409EBF3F1CE0_METHOD_1_F58F2AAE70892658_OFFSET UNITYSDK_OFFSET(0xAAA4F40)
#define CLASS_1_8D3D409EBF3F1CE0_METHOD_1_FA8E4FF37436CC1A_OFFSET UNITYSDK_OFFSET(0xAAA4A80)
#define CLASS_1_8D3D409EBF3F1CE0__CTOR_OFFSET UNITYSDK_OFFSET(0xAAA5450)

inline static constexpr unsigned int Class_1_8D3D409EBF3F1CE0_TypeDefinitionIndex = 62394;

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

	::System::Void Method_1_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D3D409EBF3F1CE0_METHOD_1_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Method_1_F58F2AAE70892658(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8D3D409EBF3F1CE0_METHOD_1_F58F2AAE70892658_OFFSET))(this, a1);
	}
};
