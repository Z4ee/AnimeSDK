#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0E72A540F0B070F3_METHOD_1_492BEF5A21DE0980_OFFSET UNITYSDK_OFFSET(0x175F9930)
#define CLASS_1_0E72A540F0B070F3_METHOD_1_4D14DD2CD7CECF8A_OFFSET UNITYSDK_OFFSET(0x175F9720)
#define CLASS_1_0E72A540F0B070F3_METHOD_1_BEE3791E1D829428_OFFSET UNITYSDK_OFFSET(0x175F95F0)

inline static constexpr unsigned int Class_1_0E72A540F0B070F3_TypeDefinitionIndex = 49436;

class Class_1_0E72A540F0B070F3 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_BEE3791E1D829428(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_0E72A540F0B070F3_METHOD_1_BEE3791E1D829428_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4D14DD2CD7CECF8A(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a1, ::System::Int32& a2, ::System::Int32& a3, ::System::Int32& a4, ::System::Int32& a5)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_0E72A540F0B070F3_METHOD_1_4D14DD2CD7CECF8A_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_492BEF5A21DE0980(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::MoleMole::HollowChessboard::HollowCell a5)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_0E72A540F0B070F3_METHOD_1_492BEF5A21DE0980_OFFSET))(a1, a2, a3, a4, a5);
	}
};
