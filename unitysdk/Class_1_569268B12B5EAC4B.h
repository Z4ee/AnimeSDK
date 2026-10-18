#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_569268B12B5EAC4B_Class_1_408FC0B01F764592;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_569268B12B5EAC4B_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB164020)
#define CLASS_1_569268B12B5EAC4B_GET_TOTALSIZE_OFFSET UNITYSDK_OFFSET(0xB164040)
#define CLASS_1_569268B12B5EAC4B_METHOD_1_228FFF566045A103_OFFSET UNITYSDK_OFFSET(0xB1640D0)
#define CLASS_1_569268B12B5EAC4B_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB164240)
#define CLASS_1_569268B12B5EAC4B_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB164030)
#define CLASS_1_569268B12B5EAC4B_SET_TOTALSIZE_OFFSET UNITYSDK_OFFSET(0xB164050)
#define CLASS_1_569268B12B5EAC4B__CCTOR_OFFSET UNITYSDK_OFFSET(0xB164280)
#define CLASS_1_569268B12B5EAC4B__CTOR_OFFSET UNITYSDK_OFFSET(0xB164060)

inline static constexpr unsigned int Class_1_569268B12B5EAC4B_TypeDefinitionIndex = 69478;

class Class_1_569268B12B5EAC4B : public ::System::Object
{
public:
	static ::Class_1_569268B12B5EAC4B** StaticGet_NFPNNCGHELC()
	{
		return (::Class_1_569268B12B5EAC4B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_569268B12B5EAC4B_TypeDefinitionIndex)->GetStaticField(0x6E3E0);
	}
	static ::System::String** StaticGet_KFCGOENIDAE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_569268B12B5EAC4B_TypeDefinitionIndex)->GetStaticField(0x6E3E8);
	}
	static ::System::String** StaticGet_OOECCGCHLFC()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_569268B12B5EAC4B_TypeDefinitionIndex)->GetStaticField(0x6E3F0);
	}
	static ::System::String** StaticGet_ACGNKOKELDI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_569268B12B5EAC4B_TypeDefinitionIndex)->GetStaticField(0x6E3F8);
	}
	::System::String* JGGPGNMMKOI; // 0x10
	::System::String* DCMOCIGCIHJ; // 0x18
	::System::String* _Name_k__BackingField; // 0x20
	::System::String* CHAGHHONPJN; // 0x28
	::System::Collections::Generic::List_1<::Class_1_569268B12B5EAC4B_Class_1_408FC0B01F764592*>* FJCAKOIDONG; // 0x30
	::System::Int32 _TotalSize_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_569268B12B5EAC4B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_569268B12B5EAC4B__CCTOR_OFFSET))();
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_569268B12B5EAC4B_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_569268B12B5EAC4B_SET_NAME_OFFSET))(this, a1);
	}

	::System::Int32 get_TotalSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_569268B12B5EAC4B_GET_TOTALSIZE_OFFSET))(this);
	}

	::System::Void set_TotalSize(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_569268B12B5EAC4B_SET_TOTALSIZE_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_228FFF566045A103()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_569268B12B5EAC4B_METHOD_1_228FFF566045A103_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_569268B12B5EAC4B_METHOD_1_5790A55946AA509D_OFFSET))();
	}
};
