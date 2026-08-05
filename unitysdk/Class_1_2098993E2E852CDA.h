#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_316CBDE931844AF4.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_4BD7B665C4CA18EA;
class Class_1_D78EEB0971654883;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2098993E2E852CDA_METHOD_1_22367A4F0964D039_OFFSET UNITYSDK_OFFSET(0x12149C10)
#define CLASS_1_2098993E2E852CDA_METHOD_1_45BF6057F712E145_OFFSET UNITYSDK_OFFSET(0x12149220)
#define CLASS_1_2098993E2E852CDA_METHOD_1_93F6C5193E797821_OFFSET UNITYSDK_OFFSET(0x12149910)
#define CLASS_1_2098993E2E852CDA_METHOD_1_B65BB033576C0E3E_OFFSET UNITYSDK_OFFSET(0x121498B0)
#define CLASS_1_2098993E2E852CDA_METHOD_1_B8CEFFD069F754AF_OFFSET UNITYSDK_OFFSET(0x121492E0)
#define CLASS_1_2098993E2E852CDA_METHOD_1_DFA5C70FAC5B0083_OFFSET UNITYSDK_OFFSET(0x12149B70)

inline static constexpr unsigned int Class_1_2098993E2E852CDA_TypeDefinitionIndex = 72334;

class Class_1_2098993E2E852CDA : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_45BF6057F712E145(::Enum_3_316CBDE931844AF4 a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::Class_1_4BD7B665C4CA18EA* a3, ::System::Collections::Generic::List_1<::Class_1_4BD7B665C4CA18EA*>* a4)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::Enum_3_316CBDE931844AF4, ::MoleMole::HollowChessboard::HollowChessboardUID, ::Class_1_4BD7B665C4CA18EA*, ::System::Collections::Generic::List_1<::Class_1_4BD7B665C4CA18EA*>*))((::PBYTE)hIl2Cpp + CLASS_1_2098993E2E852CDA_METHOD_1_45BF6057F712E145_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_B8CEFFD069F754AF(::System::Collections::Generic::List_1<::System::Int32>* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::Class_1_4BD7B665C4CA18EA* a3, ::System::Collections::Generic::List_1<::Class_1_4BD7B665C4CA18EA*>* a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::Class_1_4BD7B665C4CA18EA*, ::System::Collections::Generic::List_1<::Class_1_4BD7B665C4CA18EA*>*))((::PBYTE)hIl2Cpp + CLASS_1_2098993E2E852CDA_METHOD_1_B8CEFFD069F754AF_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector2Int Method_1_B65BB033576C0E3E(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::UnityEngine::Vector2Int(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_2098993E2E852CDA_METHOD_1_B65BB033576C0E3E_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_93F6C5193E797821(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::System::Boolean a3, ::UnityEngine::Vector2Int a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::Boolean, ::UnityEngine::Vector2Int, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2098993E2E852CDA_METHOD_1_93F6C5193E797821_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_1_22367A4F0964D039(::Class_1_D78EEB0971654883* a1, ::System::Int32 a2)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::Class_1_D78EEB0971654883*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2098993E2E852CDA_METHOD_1_22367A4F0964D039_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_DFA5C70FAC5B0083(::UnityEngine::Vector2Int a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector2Int, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2098993E2E852CDA_METHOD_1_DFA5C70FAC5B0083_OFFSET))(a1, a2);
	}
};
