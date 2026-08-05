#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::ChessStateMachine { class ChessSMPathMap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2111606A781D0ACB_METHOD_1_398B86C2A9AAA510_OFFSET UNITYSDK_OFFSET(0x16844A90)
#define CLASS_1_2111606A781D0ACB_METHOD_1_6D33E48D72B43CFF_OFFSET UNITYSDK_OFFSET(0x168447D0)
#define CLASS_1_2111606A781D0ACB_METHOD_1_9FEB7A47E3E38E1A_OFFSET UNITYSDK_OFFSET(0x16844720)
#define CLASS_1_2111606A781D0ACB_METHOD_1_FAF809643E9055ED_OFFSET UNITYSDK_OFFSET(0x16844B80)
#define CLASS_1_2111606A781D0ACB__CCTOR_OFFSET UNITYSDK_OFFSET(0x16844710)
#define CLASS_1_2111606A781D0ACB__CTOR_OFFSET UNITYSDK_OFFSET(0x16844700)

inline static constexpr unsigned int Class_1_2111606A781D0ACB_TypeDefinitionIndex = 53052;

class Class_1_2111606A781D0ACB : public ::System::Object
{
public:
	static ::MoleMole::ChessStateMachine::ChessSMPathMap** StaticGet_Field_1_0()
	{
		return (::MoleMole::ChessStateMachine::ChessSMPathMap**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2111606A781D0ACB_TypeDefinitionIndex)->GetStaticField(0x50370);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2111606A781D0ACB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2111606A781D0ACB__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_9FEB7A47E3E38E1A(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2111606A781D0ACB_METHOD_1_9FEB7A47E3E38E1A_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::ChessStateMachine::ChessSMPathMap* Method_1_398B86C2A9AAA510()
	{
		return ((::MoleMole::ChessStateMachine::ChessSMPathMap*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2111606A781D0ACB_METHOD_1_398B86C2A9AAA510_OFFSET))();
	}

	static ::Foundation::AssetPath Method_1_FAF809643E9055ED()
	{
		return ((::Foundation::AssetPath(*)())((::PBYTE)hIl2Cpp + CLASS_1_2111606A781D0ACB_METHOD_1_FAF809643E9055ED_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_6D33E48D72B43CFF(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2111606A781D0ACB_METHOD_1_6D33E48D72B43CFF_OFFSET))(a1, a2);
	}
};
