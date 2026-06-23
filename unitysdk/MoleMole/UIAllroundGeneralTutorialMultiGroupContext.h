#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAllroundGeneralTutorialDialogContenxt.h"

class Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIALLROUNDGENERALTUTORIALMULTIGROUPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17594930)

namespace MoleMole
{
	inline static constexpr unsigned int UIAllroundGeneralTutorialMultiGroupContext_TypeDefinitionIndex = 56332;

	class UIAllroundGeneralTutorialMultiGroupContext : public ::MoleMole::UIAllroundGeneralTutorialDialogContenxt
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915*>* multiGroupData; // 0x68

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915*>* multiGroupData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALMULTIGROUPCONTEXT__CTOR_OFFSET))(this, multiGroupData);
		}
	};
}
