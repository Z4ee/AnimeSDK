#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2A4C736BDC15CDDB_Class_1_AA7188805115876B;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2A4C736BDC15CDDB_CLASS_1_52773D6AFB555922_METHOD_1_652E996B985F5ACB_OFFSET UNITYSDK_OFFSET(0x938E9F0)
#define CLASS_1_2A4C736BDC15CDDB_CLASS_1_52773D6AFB555922__CTOR_OFFSET UNITYSDK_OFFSET(0x938DD60)

inline static constexpr unsigned int Class_1_2A4C736BDC15CDDB_Class_1_52773D6AFB555922_TypeDefinitionIndex = 64035;

class Class_1_2A4C736BDC15CDDB_Class_1_52773D6AFB555922 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_2A4C736BDC15CDDB_Class_1_AA7188805115876B*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4C736BDC15CDDB_CLASS_1_52773D6AFB555922__CTOR_OFFSET))(this);
	}

	::Class_1_2A4C736BDC15CDDB_Class_1_AA7188805115876B* Method_1_652E996B985F5ACB()
	{
		return ((::Class_1_2A4C736BDC15CDDB_Class_1_AA7188805115876B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4C736BDC15CDDB_CLASS_1_52773D6AFB555922_METHOD_1_652E996B985F5ACB_OFFSET))(this);
	}
};
