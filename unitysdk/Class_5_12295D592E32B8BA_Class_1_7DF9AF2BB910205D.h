#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_5_12295D592E32B8BA;
class Class_5_A6F8D19602712D95;
class Class_5_FCAF801AC482D3B5;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_5_12295D592E32B8BA_CLASS_1_7DF9AF2BB910205D_METHOD_1_71BB222C65B6343D_OFFSET UNITYSDK_OFFSET(0xFFEE270)
#define CLASS_5_12295D592E32B8BA_CLASS_1_7DF9AF2BB910205D__CTOR_OFFSET UNITYSDK_OFFSET(0xFFEE260)

inline static constexpr unsigned int Class_5_12295D592E32B8BA_Class_1_7DF9AF2BB910205D_TypeDefinitionIndex = 65837;

class Class_5_12295D592E32B8BA_Class_1_7DF9AF2BB910205D : public ::System::Object
{
public:
	::Class_5_FCAF801AC482D3B5* Field_1_2; // 0x10
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_0; // 0x18
	::Class_5_12295D592E32B8BA* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_CLASS_1_7DF9AF2BB910205D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_71BB222C65B6343D(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_CLASS_1_7DF9AF2BB910205D_METHOD_1_71BB222C65B6343D_OFFSET))(this, a1);
	}
};
