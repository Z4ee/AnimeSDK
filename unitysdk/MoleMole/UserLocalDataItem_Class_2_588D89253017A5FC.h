#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

namespace MoleMole { class UserLocalDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_97;

#define MOLEMOLE_USERLOCALDATAITEM_CLASS_2_588D89253017A5FC_METHOD_2_01D7A0445ED53788_OFFSET UNITYSDK_OFFSET(0x1133F7E0)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_2_588D89253017A5FC_METHOD_2_079483A719F0F20C_OFFSET UNITYSDK_OFFSET(0x1133F7C0)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_2_588D89253017A5FC_METHOD_2_A631041D3FECD623_OFFSET UNITYSDK_OFFSET(0x1133DB80)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_2_588D89253017A5FC_METHOD_2_ED443D1CD0B8AD8B_OFFSET UNITYSDK_OFFSET(0x1133F7F0)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_2_588D89253017A5FC_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1133F710)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_2_588D89253017A5FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1133DB20)

namespace MoleMole
{
	inline static constexpr unsigned int UserLocalDataItem_Class_2_588D89253017A5FC_TypeDefinitionIndex = 78287;

	class UserLocalDataItem_Class_2_588D89253017A5FC : public ::Class_1_F4299CC27263318B
	{
	public:
		::MoleMole::UserLocalDataItem* Field_2_1; // 0x70
		::Class_0_16E4307DCC419505_97<::System::Collections::Generic::List_1<::System::Int32>*>* Field_2_0; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_2_588D89253017A5FC__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_2_588D89253017A5FC_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Void Method_2_A631041D3FECD623(::MoleMole::UserLocalDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UserLocalDataItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_2_588D89253017A5FC_METHOD_2_A631041D3FECD623_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* Method_2_079483A719F0F20C()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_2_588D89253017A5FC_METHOD_2_079483A719F0F20C_OFFSET))(this);
		}

		::System::Void Method_2_01D7A0445ED53788(::Class_0_16E4307DCC419505_97<::System::Collections::Generic::List_1<::System::Int32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_97<::System::Collections::Generic::List_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_2_588D89253017A5FC_METHOD_2_01D7A0445ED53788_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_97<::System::Collections::Generic::List_1<::System::Int32>*>* Method_2_ED443D1CD0B8AD8B()
		{
			return ((::Class_0_16E4307DCC419505_97<::System::Collections::Generic::List_1<::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_2_588D89253017A5FC_METHOD_2_ED443D1CD0B8AD8B_OFFSET))(this);
		}
	};
}
