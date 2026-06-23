#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_534AF681CC2BD5FD_1.h"
#include "unitysdk/Struct_2_52A902145F5BE51A.h"
#include "unitysdk/Struct_2_EADB70559B2B5513_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_42D6C83304D68DB2_METHOD_4_BB98F44BD3DEB2BA_OFFSET UNITYSDK_OFFSET(0x1BD277B0)
#define CLASS_4_42D6C83304D68DB2_METHOD_4_DC18FF8EFDFCAAC1_OFFSET UNITYSDK_OFFSET(0x1BD276D0)
#define CLASS_4_42D6C83304D68DB2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD27720)
#define CLASS_4_42D6C83304D68DB2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BD27620)
#define CLASS_4_42D6C83304D68DB2__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD27570)

inline static constexpr unsigned int Class_4_42D6C83304D68DB2_TypeDefinitionIndex = 88464;

class Class_4_42D6C83304D68DB2 : public ::Class_3_534AF681CC2BD5FD_1<::Struct_2_EADB70559B2B5513_1>
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_4_0()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_42D6C83304D68DB2_TypeDefinitionIndex)->GetStaticField(0x4DCE0);
	}
	::System::String* Field_4_2; // 0x10
	::System::Int32 Field_4_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_42D6C83304D68DB2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_42D6C83304D68DB2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_42D6C83304D68DB2__CCTOR_OFFSET))();
	}

	::Struct_2_EADB70559B2B5513_1 Method_4_DC18FF8EFDFCAAC1(::Struct_2_52A902145F5BE51A& a1)
	{
		return ((::Struct_2_EADB70559B2B5513_1(*)(::PVOID, ::Struct_2_52A902145F5BE51A&))((::PBYTE)hIl2Cpp + CLASS_4_42D6C83304D68DB2_METHOD_4_DC18FF8EFDFCAAC1_OFFSET))(this, a1);
	}

	static ::System::String* Method_4_BB98F44BD3DEB2BA(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_42D6C83304D68DB2_METHOD_4_BB98F44BD3DEB2BA_OFFSET))(a1);
	}
};
