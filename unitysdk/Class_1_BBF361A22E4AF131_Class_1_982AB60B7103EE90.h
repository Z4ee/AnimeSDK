#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardInteract; }
namespace System { class Action; }

#define CLASS_1_BBF361A22E4AF131_CLASS_1_982AB60B7103EE90_METHOD_1_4F847E9CB6961388_OFFSET UNITYSDK_OFFSET(0xD46CC20)
#define CLASS_1_BBF361A22E4AF131_CLASS_1_982AB60B7103EE90__CTOR_OFFSET UNITYSDK_OFFSET(0xD46CC10)

inline static constexpr unsigned int Class_1_BBF361A22E4AF131_Class_1_982AB60B7103EE90_TypeDefinitionIndex = 60877;

class Class_1_BBF361A22E4AF131_Class_1_982AB60B7103EE90 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBF361A22E4AF131_CLASS_1_982AB60B7103EE90__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4F847E9CB6961388(::MoleMole::Config::ConfigHollowChessboardInteract* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardInteract*))((::PBYTE)hIl2Cpp + CLASS_1_BBF361A22E4AF131_CLASS_1_982AB60B7103EE90_METHOD_1_4F847E9CB6961388_OFFSET))(this, a1);
	}
};
