#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/Object.h"

class Class_5_2B047B81D949C4E6;
namespace System { class String; }

#define CLASS_1_2AC21C300DACE8F0_METHOD_1_1E0EB9A02BBF7B01_OFFSET UNITYSDK_OFFSET(0xD09AD10)
#define CLASS_1_2AC21C300DACE8F0_METHOD_1_2AF1356A4FD9051D_OFFSET UNITYSDK_OFFSET(0xD09ABC0)
#define CLASS_1_2AC21C300DACE8F0_METHOD_1_C33F903A86BD8D20_OFFSET UNITYSDK_OFFSET(0xD09AF10)
#define CLASS_1_2AC21C300DACE8F0_METHOD_1_CC1D282A19B7839E_OFFSET UNITYSDK_OFFSET(0xD09AE30)

inline static constexpr unsigned int Class_1_2AC21C300DACE8F0_TypeDefinitionIndex = 50257;

class Class_1_2AC21C300DACE8F0 : public ::System::Object
{
public:
	static ::System::Void Method_1_2AF1356A4FD9051D(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Share::GridDir a3)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::Share::GridDir))((::PBYTE)hIl2Cpp + CLASS_1_2AC21C300DACE8F0_METHOD_1_2AF1356A4FD9051D_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_1E0EB9A02BBF7B01(::Share::GridDir a1)
	{
		return ((::System::String*(*)(::Share::GridDir))((::PBYTE)hIl2Cpp + CLASS_1_2AC21C300DACE8F0_METHOD_1_1E0EB9A02BBF7B01_OFFSET))(a1);
	}

	static ::System::Void Method_1_C33F903A86BD8D20(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_2AC21C300DACE8F0_METHOD_1_C33F903A86BD8D20_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_CC1D282A19B7839E(::System::String* a1, ::Class_5_2B047B81D949C4E6* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_5_2B047B81D949C4E6*))((::PBYTE)hIl2Cpp + CLASS_1_2AC21C300DACE8F0_METHOD_1_CC1D282A19B7839E_OFFSET))(a1, a2);
	}
};
