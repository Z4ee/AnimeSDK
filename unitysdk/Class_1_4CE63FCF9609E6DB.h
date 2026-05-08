#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8.h"
#include "unitysdk/Enum_3_7B584A678A2DEB85.h"
#include "unitysdk/System/Object.h"

class Class_1_61587F018E03A222;
class Class_3_8675658B1FBE887E;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x1658DC10)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_4F20E9046ABE7D70_OFFSET UNITYSDK_OFFSET(0x1658E2D0)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_8F4E0447EDFF454E_OFFSET UNITYSDK_OFFSET(0x1658DE20)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x1658D8E0)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_C59EC92B8C2BFD96_1_OFFSET UNITYSDK_OFFSET(0x1658EA40)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_C59EC92B8C2BFD96_OFFSET UNITYSDK_OFFSET(0x1658DA30)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_C619C7D1A963CB50_OFFSET UNITYSDK_OFFSET(0x1658EA90)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_E12C69EB8CD932C7_OFFSET UNITYSDK_OFFSET(0x1658D830)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_EC07193EBB4649A8_OFFSET UNITYSDK_OFFSET(0x1658DA80)
#define CLASS_1_4CE63FCF9609E6DB__CTOR_OFFSET UNITYSDK_OFFSET(0x1658D820)

inline static constexpr unsigned int Class_1_4CE63FCF9609E6DB_TypeDefinitionIndex = 55246;

class Class_1_4CE63FCF9609E6DB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::Class_1_61587F018E03A222*>* Field_1_2; // 0x20
	::System::Collections::Generic::HashSet_1<::Enum_3_7B584A678A2DEB85>* Field_1_3; // 0x28
	::System::Action_3<::System::Int32, ::System::Int32, ::System::Int32>* Field_1_4; // 0x30
	::System::Boolean Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB__CTOR_OFFSET))(this);
	}

	::System::UInt64 Method_1_E12C69EB8CD932C7(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_E12C69EB8CD932C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Int32 Method_1_C59EC92B8C2BFD96(::System::UInt64 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_C59EC92B8C2BFD96_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EC07193EBB4649A8(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_EC07193EBB4649A8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_21886A8411E71157_OFFSET))(this);
	}

	::System::Boolean Method_1_8F4E0447EDFF454E(::System::Collections::Generic::List_1<::System::Int32>*& a1, ::System::Int32& a2, ::Enum_3_7B584A678A2DEB85 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Int32&, ::Enum_3_7B584A678A2DEB85, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_8F4E0447EDFF454E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_4F20E9046ABE7D70(::Enum_3_71AA90D596A09AC8 a1, ::Class_3_8675658B1FBE887E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8, ::Class_3_8675658B1FBE887E*))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_4F20E9046ABE7D70_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C619C7D1A963CB50(::Enum_3_71AA90D596A09AC8 a1, ::Class_3_8675658B1FBE887E* a2, ::System::Action_3<::System::Int32, ::System::Int32, ::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8, ::Class_3_8675658B1FBE887E*, ::System::Action_3<::System::Int32, ::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_C619C7D1A963CB50_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_C59EC92B8C2BFD96_1(::System::UInt64 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_C59EC92B8C2BFD96_1_OFFSET))(this, a1);
	}
};
