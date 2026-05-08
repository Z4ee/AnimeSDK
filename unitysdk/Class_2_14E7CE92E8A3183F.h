#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_244.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_139.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_14E7CE92E8A3183F_METHOD_2_774F6F4C4EEF228D_OFFSET UNITYSDK_OFFSET(0x11A5B190)
#define CLASS_2_14E7CE92E8A3183F_METHOD_2_EC0C621266EB9C8C_OFFSET UNITYSDK_OFFSET(0x11A5AF80)
#define CLASS_2_14E7CE92E8A3183F__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A5AED0)
#define CLASS_2_14E7CE92E8A3183F__CTOR_OFFSET UNITYSDK_OFFSET(0x11A5AEC0)

inline static constexpr unsigned int Class_2_14E7CE92E8A3183F_TypeDefinitionIndex = 13985;

class Class_2_14E7CE92E8A3183F : public ::Class_1_5DA2E7556103D5A3_244
{
public:
	static ::Il2CppArray<::System::Char>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_14E7CE92E8A3183F_TypeDefinitionIndex)->GetStaticField(0x8D00);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_Field_2_1()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_14E7CE92E8A3183F_TypeDefinitionIndex)->GetStaticField(0x8D08);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_2_2; // 0x178
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_3; // 0x180

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_139 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_139, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_14E7CE92E8A3183F__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_14E7CE92E8A3183F__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_EC0C621266EB9C8C()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14E7CE92E8A3183F_METHOD_2_EC0C621266EB9C8C_OFFSET))(this);
	}

	::System::Boolean Method_2_774F6F4C4EEF228D(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_2_14E7CE92E8A3183F_METHOD_2_774F6F4C4EEF228D_OFFSET))(this, a1, a2);
	}
};
