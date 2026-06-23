#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C9A08F2A8603B39E_Struct_2_AF2E1D815DB2CF40.h"
#include "unitysdk/System/Object.h"

class Class_2_C9A08F2A8603B39E_Class_1_3E7AA55251139E0A;
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_C9A08F2A8603B39E_CLASS_1_374A121053C6FB2C_METHOD_1_BBB56C77A18432B2_OFFSET UNITYSDK_OFFSET(0x13410040)
#define CLASS_2_C9A08F2A8603B39E_CLASS_1_374A121053C6FB2C_METHOD_1_F681C2109CDC83DD_OFFSET UNITYSDK_OFFSET(0x1340FFD0)
#define CLASS_2_C9A08F2A8603B39E_CLASS_1_374A121053C6FB2C__CTOR_OFFSET UNITYSDK_OFFSET(0x1340FFC0)

inline static constexpr unsigned int Class_2_C9A08F2A8603B39E_Class_1_374A121053C6FB2C_TypeDefinitionIndex = 87070;

class Class_2_C9A08F2A8603B39E_Class_1_374A121053C6FB2C : public ::System::Object
{
public:
	::Class_2_C9A08F2A8603B39E_Struct_2_AF2E1D815DB2CF40 Field_1_0; // 0x10
	::Class_2_C9A08F2A8603B39E_Class_1_3E7AA55251139E0A* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_1_374A121053C6FB2C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::Class_2_C9A08F2A8603B39E_Struct_2_AF2E1D815DB2CF40>* Method_1_F681C2109CDC83DD()
	{
		return ((::System::Collections::Generic::IList_1<::Class_2_C9A08F2A8603B39E_Struct_2_AF2E1D815DB2CF40>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_1_374A121053C6FB2C_METHOD_1_F681C2109CDC83DD_OFFSET))(this);
	}

	::System::Boolean Method_1_BBB56C77A18432B2(::MoleMole::UIUrbanMapPointWidgetContext* a1, ::Class_2_C9A08F2A8603B39E_Struct_2_AF2E1D815DB2CF40 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapPointWidgetContext*, ::Class_2_C9A08F2A8603B39E_Struct_2_AF2E1D815DB2CF40))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_1_374A121053C6FB2C_METHOD_1_BBB56C77A18432B2_OFFSET))(this, a1, a2);
	}
};
