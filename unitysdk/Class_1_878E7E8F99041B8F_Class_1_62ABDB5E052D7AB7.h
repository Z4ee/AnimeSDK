#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_878E7E8F99041B8F_Class_1_91597CDD1AE0159E;

#define CLASS_1_878E7E8F99041B8F_CLASS_1_62ABDB5E052D7AB7_METHOD_1_BCB38AEA2DADDE27_OFFSET UNITYSDK_OFFSET(0x109DC300)
#define CLASS_1_878E7E8F99041B8F_CLASS_1_62ABDB5E052D7AB7__CTOR_OFFSET UNITYSDK_OFFSET(0x109DC2F0)

inline static constexpr unsigned int Class_1_878E7E8F99041B8F_Class_1_62ABDB5E052D7AB7_TypeDefinitionIndex = 45633;

class Class_1_878E7E8F99041B8F_Class_1_62ABDB5E052D7AB7 : public ::System::Object
{
public:
	::Class_1_878E7E8F99041B8F_Class_1_91597CDD1AE0159E* Field_1_7; // 0x10
	::MoleMole::HollowChessboard::HollowCell Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_878E7E8F99041B8F_CLASS_1_62ABDB5E052D7AB7__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_BCB38AEA2DADDE27()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_878E7E8F99041B8F_CLASS_1_62ABDB5E052D7AB7_METHOD_1_BCB38AEA2DADDE27_OFFSET))(this);
	}
};
