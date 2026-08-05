#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_EA6632B7AF7D71D5_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x15C0B8A0)
#define CLASS_1_EA6632B7AF7D71D5_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x15C0B890)
#define CLASS_1_EA6632B7AF7D71D5_METHOD_1_A0986CE5C864837D_OFFSET UNITYSDK_OFFSET(0x15C0B8C0)
#define CLASS_1_EA6632B7AF7D71D5_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x15C0B8B0)
#define CLASS_1_EA6632B7AF7D71D5_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x15C0B880)
#define CLASS_1_EA6632B7AF7D71D5_METHOD_1_EE086671FA382CE2_OFFSET UNITYSDK_OFFSET(0x15C0BA00)
#define CLASS_1_EA6632B7AF7D71D5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15C0B870)
#define CLASS_1_EA6632B7AF7D71D5__CTOR_OFFSET UNITYSDK_OFFSET(0x15C0B860)

inline static constexpr unsigned int Class_1_EA6632B7AF7D71D5_TypeDefinitionIndex = 65479;

class Class_1_EA6632B7AF7D71D5 : public ::System::Object
{
public:
	::System::Single Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA6632B7AF7D71D5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA6632B7AF7D71D5__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA6632B7AF7D71D5_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA6632B7AF7D71D5_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA6632B7AF7D71D5_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA6632B7AF7D71D5_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A0986CE5C864837D(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA6632B7AF7D71D5_METHOD_1_A0986CE5C864837D_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_EE086671FA382CE2(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA6632B7AF7D71D5_METHOD_1_EE086671FA382CE2_OFFSET))(this, a1, a2, a3);
	}
};
