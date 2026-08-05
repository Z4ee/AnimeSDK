#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/Enum_3_BA52F0D4CE1315D0.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_2EF7AC7A6C04963E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_F157DD73C7C08100;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_A775D85F01327F77_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12F27CF0)
#define CLASS_2_A775D85F01327F77_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12F268F0)
#define CLASS_2_A775D85F01327F77_METHOD_2_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x12F26970)
#define CLASS_2_A775D85F01327F77_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x12F28260)
#define CLASS_2_A775D85F01327F77_METHOD_2_1DFF921950D5D3D5_OFFSET UNITYSDK_OFFSET(0x12F27D50)
#define CLASS_2_A775D85F01327F77_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x12F26700)
#define CLASS_2_A775D85F01327F77_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x12F268E0)
#define CLASS_2_A775D85F01327F77_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12F28410)
#define CLASS_2_A775D85F01327F77_METHOD_2_CF667B25396A76F4_OFFSET UNITYSDK_OFFSET(0x12F251A0)
#define CLASS_2_A775D85F01327F77_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x12F284A0)
#define CLASS_2_A775D85F01327F77_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x12F267E0)
#define CLASS_2_A775D85F01327F77__CTOR_OFFSET UNITYSDK_OFFSET(0x12F281C0)

inline static constexpr unsigned int Class_2_A775D85F01327F77_TypeDefinitionIndex = 69418;

class Class_2_A775D85F01327F77 : public ::Class_1_8088D8743C1058EF
{
public:
	::Class_1_F157DD73C7C08100* Field_2_7; // 0x30
	::Struct_2_2EF7AC7A6C04963E<::System::Boolean> Field_2_13; // 0x38
	::Struct_2_2EF7AC7A6C04963E<::System::Boolean> Field_2_9; // 0x58
	::Class_1_F157DD73C7C08100* Field_2_6; // 0x78
	::Struct_2_2EF7AC7A6C04963E<::UnityEngine::Vector3> Field_2_4; // 0x80
	::Class_1_F157DD73C7C08100* Field_2_5; // 0xA0
	::Struct_2_2EF7AC7A6C04963E<::System::Boolean> Field_2_15; // 0xA8
	::Struct_2_2EF7AC7A6C04963E<::UnityEngine::Vector3> Field_2_11; // 0xC8
	::Struct_2_2EF7AC7A6C04963E<::System::Boolean> Field_2_14; // 0xE8
	::Struct_2_2EF7AC7A6C04963E<::System::Boolean> Field_2_8; // 0x108
	::Class_1_F157DD73C7C08100* Field_2_0; // 0x128
	::Enum_3_BA52F0D4CE1315D0 Field_2_10; // 0x130

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A775D85F01327F77__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CF667B25396A76F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A775D85F01327F77_METHOD_2_CF667B25396A76F4_OFFSET))(this);
	}

	::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_A775D85F01327F77_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A775D85F01327F77_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A775D85F01327F77_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_A775D85F01327F77_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A775D85F01327F77_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_A775D85F01327F77* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_A775D85F01327F77*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A775D85F01327F77_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_1DFF921950D5D3D5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A775D85F01327F77_METHOD_2_1DFF921950D5D3D5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A775D85F01327F77_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_2_A775D85F01327F77* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_A775D85F01327F77*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_A775D85F01327F77_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_A775D85F01327F77_METHOD_2_0578713EDB32B89E_OFFSET))(this, a1);
	}
};
