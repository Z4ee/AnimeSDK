#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class GalScript; }

#define CLASS_1_5926D82DBE2CD746_METHOD_1_061DC1BA4C13F982_OFFSET UNITYSDK_OFFSET(0xE4D44A0)

inline static constexpr unsigned int Class_1_5926D82DBE2CD746_TypeDefinitionIndex = 46272;

class Class_1_5926D82DBE2CD746 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_061DC1BA4C13F982(::System::Int32 a1, ::MoleMole::GalGame::GalScript*& a2, ::Foundation::AssetRequestHandle& a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::GalGame::GalScript*&, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + CLASS_1_5926D82DBE2CD746_METHOD_1_061DC1BA4C13F982_OFFSET))(a1, a2, a3);
	}
};
