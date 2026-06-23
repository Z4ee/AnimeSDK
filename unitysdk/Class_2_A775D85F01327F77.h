#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/Enum_3_BA52F0D4CE1315D0.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_B352564924EC2DFE.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_F157DD73C7C08100;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_A775D85F01327F77_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18050F30)
#define CLASS_2_A775D85F01327F77_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1804FB60)
#define CLASS_2_A775D85F01327F77_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x180514A0)
#define CLASS_2_A775D85F01327F77_METHOD_2_1DFF921950D5D3D5_OFFSET UNITYSDK_OFFSET(0x18050F90)
#define CLASS_2_A775D85F01327F77_METHOD_2_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0x1804FBE0)
#define CLASS_2_A775D85F01327F77_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x1804F910)
#define CLASS_2_A775D85F01327F77_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1804FAF0)
#define CLASS_2_A775D85F01327F77_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18051650)
#define CLASS_2_A775D85F01327F77_METHOD_2_CF667B25396A76F4_OFFSET UNITYSDK_OFFSET(0x1804E390)
#define CLASS_2_A775D85F01327F77_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x180516E0)
#define CLASS_2_A775D85F01327F77_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1804F9F0)
#define CLASS_2_A775D85F01327F77__CTOR_OFFSET UNITYSDK_OFFSET(0x18051400)

inline static constexpr unsigned int Class_2_A775D85F01327F77_TypeDefinitionIndex = 64146;

class Class_2_A775D85F01327F77 : public ::Class_1_8088D8743C1058EF
{
public:
	::Struct_2_B352564924EC2DFE<::System::Boolean> Field_2_7; // 0x30
	::Struct_2_B352564924EC2DFE<::UnityEngine::Vector3> Field_2_4; // 0x50
	::Struct_2_B352564924EC2DFE<::System::Boolean> Field_2_8; // 0x70
	::Class_1_F157DD73C7C08100* Field_2_3; // 0x90
	::Struct_2_B352564924EC2DFE<::System::Boolean> Field_2_9; // 0x98
	::Struct_2_B352564924EC2DFE<::System::Boolean> Field_2_11; // 0xB8
	::Class_1_F157DD73C7C08100* Field_2_1; // 0xD8
	::Class_1_F157DD73C7C08100* Field_2_0; // 0xE0
	::Struct_2_B352564924EC2DFE<::System::Boolean> Field_2_10; // 0xE8
	::Class_1_F157DD73C7C08100* Field_2_2; // 0x108
	::Struct_2_B352564924EC2DFE<::UnityEngine::Vector3> Field_2_5; // 0x110
	::Enum_3_BA52F0D4CE1315D0 Field_2_6; // 0x130

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

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A775D85F01327F77_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_A775D85F01327F77_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A775D85F01327F77_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_A775D85F01327F77_METHOD_2_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	static ::Class_2_A775D85F01327F77* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_A775D85F01327F77*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A775D85F01327F77_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A775D85F01327F77_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_1DFF921950D5D3D5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A775D85F01327F77_METHOD_2_1DFF921950D5D3D5_OFFSET))(this, a1, a2);
	}

	static ::Class_2_A775D85F01327F77* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_A775D85F01327F77*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_A775D85F01327F77_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}
};
