#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_201.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_748.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_14E7CE92E8A3183F_METHOD_2_774F6F4C4EEF228D_OFFSET UNITYSDK_OFFSET(0x153BC990)
#define CLASS_2_14E7CE92E8A3183F_METHOD_2_EC0C621266EB9C8C_OFFSET UNITYSDK_OFFSET(0x153BCDB0)
#define CLASS_2_14E7CE92E8A3183F__CCTOR_OFFSET UNITYSDK_OFFSET(0x153BC8E0)
#define CLASS_2_14E7CE92E8A3183F__CTOR_OFFSET UNITYSDK_OFFSET(0x153BC8D0)

inline static constexpr unsigned int Class_2_14E7CE92E8A3183F_TypeDefinitionIndex = 18428;

class Class_2_14E7CE92E8A3183F : public ::Class_1_5DA2E7556103D5A3_201
{
public:
	static ::Il2CppArray<::System::Char>** StaticGet_Field_2_2()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_14E7CE92E8A3183F_TypeDefinitionIndex)->GetStaticField(0x7A40);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_Field_2_3()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_14E7CE92E8A3183F_TypeDefinitionIndex)->GetStaticField(0x7A48);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_2_1; // 0x178
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x180

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_748 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_748, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_14E7CE92E8A3183F__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_14E7CE92E8A3183F__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_774F6F4C4EEF228D(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_2_14E7CE92E8A3183F_METHOD_2_774F6F4C4EEF228D_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_EC0C621266EB9C8C()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14E7CE92E8A3183F_METHOD_2_EC0C621266EB9C8C_OFFSET))(this);
	}
};
