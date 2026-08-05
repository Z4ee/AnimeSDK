#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5DAAF78A77D2F3AC.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_1_B353AD2F4C8AD4F8;
class Class_2_69FE2A2F26EAE95C;
class Class_2_7B173A84028F0757;
class Class_2_F21834FAEFB228CB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_F4535D21F0216CD2_METHOD_1_522C97A47C3F7DF2_OFFSET UNITYSDK_OFFSET(0x1F99C280)
#define CLASS_1_F4535D21F0216CD2_METHOD_1_7C412E4C48006725_OFFSET UNITYSDK_OFFSET(0x1F99D5C0)
#define CLASS_1_F4535D21F0216CD2_METHOD_1_87D695987E98317C_OFFSET UNITYSDK_OFFSET(0x1F99CEF0)
#define CLASS_1_F4535D21F0216CD2_METHOD_1_B477C1BA120AA233_OFFSET UNITYSDK_OFFSET(0x1F99C9F0)
#define CLASS_1_F4535D21F0216CD2_METHOD_1_E7DFCECCDA13BDFD_OFFSET UNITYSDK_OFFSET(0x1F99D370)
#define CLASS_1_F4535D21F0216CD2_METHOD_1_E8FC44A0EBF98EE4_OFFSET UNITYSDK_OFFSET(0x1F99DA00)
#define CLASS_1_F4535D21F0216CD2_METHOD_1_EDAC50D2C44DBB20_OFFSET UNITYSDK_OFFSET(0x1F99CCD0)
#define CLASS_1_F4535D21F0216CD2_METHOD_1_EF90201D71404787_OFFSET UNITYSDK_OFFSET(0x1F99C5D0)
#define CLASS_1_F4535D21F0216CD2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F99C900)
#define CLASS_1_F4535D21F0216CD2__CTOR_OFFSET UNITYSDK_OFFSET(0x1F99BA00)

inline static constexpr unsigned int Class_1_F4535D21F0216CD2_TypeDefinitionIndex = 19136;

class Class_1_F4535D21F0216CD2 : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_4()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F4535D21F0216CD2_TypeDefinitionIndex)->GetStaticField(0x8220);
	}
	::System::Collections::Generic::IDictionary_2<::Struct_2_5DAAF78A77D2F3AC<::Class_0_16E4307DCC419505_29*>, ::Class_2_69FE2A2F26EAE95C*>* Field_1_7; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_1_B353AD2F4C8AD4F8*>* Field_1_5; // 0x18
	::System::Collections::Generic::IDictionary_2<::System::String*, ::Class_0_16E4307DCC419505_29*>* Field_1_0; // 0x20
	::System::Collections::Generic::IDictionary_2<::Struct_2_5DAAF78A77D2F3AC<::Class_0_16E4307DCC419505_29*>, ::Class_2_7B173A84028F0757*>* Field_1_6; // 0x28

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::Class_1_B353AD2F4C8AD4F8*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_B353AD2F4C8AD4F8*>*))((::PBYTE)hIl2Cpp + CLASS_1_F4535D21F0216CD2__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F4535D21F0216CD2__CCTOR_OFFSET))();
	}

	::Class_0_16E4307DCC419505_29* Method_1_B477C1BA120AA233(::System::String* a1, ::Class_0_16E4307DCC419505_29* a2)
	{
		return ((::Class_0_16E4307DCC419505_29*(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_1_F4535D21F0216CD2_METHOD_1_B477C1BA120AA233_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EDAC50D2C44DBB20(::Class_2_7B173A84028F0757* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7B173A84028F0757*))((::PBYTE)hIl2Cpp + CLASS_1_F4535D21F0216CD2_METHOD_1_EDAC50D2C44DBB20_OFFSET))(this, a1);
	}

	::System::Void Method_1_87D695987E98317C(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_1_F4535D21F0216CD2_METHOD_1_87D695987E98317C_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_E7DFCECCDA13BDFD(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_1_F4535D21F0216CD2_METHOD_1_E7DFCECCDA13BDFD_OFFSET))(a1);
	}

	::System::Void Method_1_7C412E4C48006725(::Class_2_69FE2A2F26EAE95C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_69FE2A2F26EAE95C*))((::PBYTE)hIl2Cpp + CLASS_1_F4535D21F0216CD2_METHOD_1_7C412E4C48006725_OFFSET))(this, a1);
	}

	::System::Void Method_1_522C97A47C3F7DF2(::Class_1_B353AD2F4C8AD4F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B353AD2F4C8AD4F8*))((::PBYTE)hIl2Cpp + CLASS_1_F4535D21F0216CD2_METHOD_1_522C97A47C3F7DF2_OFFSET))(this, a1);
	}

	::Class_2_69FE2A2F26EAE95C* Method_1_E8FC44A0EBF98EE4(::Class_2_F21834FAEFB228CB* a1, ::System::Int32 a2)
	{
		return ((::Class_2_69FE2A2F26EAE95C*(*)(::PVOID, ::Class_2_F21834FAEFB228CB*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F4535D21F0216CD2_METHOD_1_E8FC44A0EBF98EE4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EF90201D71404787(::System::String* a1, ::Class_1_B353AD2F4C8AD4F8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_B353AD2F4C8AD4F8*))((::PBYTE)hIl2Cpp + CLASS_1_F4535D21F0216CD2_METHOD_1_EF90201D71404787_OFFSET))(this, a1, a2);
	}
};
