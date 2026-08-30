#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_AF3AF723C478F113_ExtraExportData_SubObject;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AF3AF723C478F113_EXTRAEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1585BFD0)

inline static constexpr unsigned int Class_2_AF3AF723C478F113_ExtraExportData_TypeDefinitionIndex = 49466;

class Class_2_AF3AF723C478F113_ExtraExportData : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_AF3AF723C478F113_ExtraExportData_SubObject*>* chilren; // 0x10
	::System::String* MainTexPath; // 0x18
	::System::String* MaskTexPath; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_EXTRAEXPORTDATA__CTOR_OFFSET))(this);
	}
};
