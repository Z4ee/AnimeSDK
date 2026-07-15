#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2A4C736BDC15CDDB_Class_1_AA7188805115876B;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2A4C736BDC15CDDB_CLASS_1_6EF01436BBEB928C_METHOD_1_66C525F07AE6A602_OFFSET UNITYSDK_OFFSET(0x17859510)
#define CLASS_1_2A4C736BDC15CDDB_CLASS_1_6EF01436BBEB928C__CTOR_OFFSET UNITYSDK_OFFSET(0x17858970)

inline static constexpr unsigned int Class_1_2A4C736BDC15CDDB_Class_1_6EF01436BBEB928C_TypeDefinitionIndex = 66361;

class Class_1_2A4C736BDC15CDDB_Class_1_6EF01436BBEB928C : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_2A4C736BDC15CDDB_Class_1_AA7188805115876B*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4C736BDC15CDDB_CLASS_1_6EF01436BBEB928C__CTOR_OFFSET))(this);
	}

	::Class_1_2A4C736BDC15CDDB_Class_1_AA7188805115876B* Method_1_66C525F07AE6A602()
	{
		return ((::Class_1_2A4C736BDC15CDDB_Class_1_AA7188805115876B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4C736BDC15CDDB_CLASS_1_6EF01436BBEB928C_METHOD_1_66C525F07AE6A602_OFFSET))(this);
	}
};
