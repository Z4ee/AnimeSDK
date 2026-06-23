#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/System/Object.h"

class Class_1_077219EE5F3510E3;
class Class_1_236FD73ABC492E3F;
class Class_1_BD2E5F64784FE078;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6205A6C2B1CC7E97_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FD7030)
#define CLASS_1_6205A6C2B1CC7E97_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16FD73B0)
#define CLASS_1_6205A6C2B1CC7E97_METHOD_1_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x16FD7430)
#define CLASS_1_6205A6C2B1CC7E97_METHOD_1_1DFF921950D5D3D5_OFFSET UNITYSDK_OFFSET(0x16FD7090)
#define CLASS_1_6205A6C2B1CC7E97__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD7A40)

inline static constexpr unsigned int Class_1_6205A6C2B1CC7E97_TypeDefinitionIndex = 59261;

class Class_1_6205A6C2B1CC7E97 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_BD2E5F64784FE078*>* Field_1_0; // 0x10
	::Class_1_077219EE5F3510E3* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_BD2E5F64784FE078*>* Field_1_1; // 0x20
	::MoleMole::Config::AidAttackType Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6205A6C2B1CC7E97__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6205A6C2B1CC7E97_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_6205A6C2B1CC7E97_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1DFF921950D5D3D5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6205A6C2B1CC7E97_METHOD_1_1DFF921950D5D3D5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_6205A6C2B1CC7E97_METHOD_1_00531776927FE5B6_OFFSET))(this, a1);
	}
};
