#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/VCMask.h"
#include "unitysdk/System/Object.h"

class Class_1_029AD5385E36F1C7;
class Class_1_C3A033C60E10FDC7;
namespace RPG::GameCore { class CRPVirtualCameraConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class GameWorld; }

#define CLASS_1_AFFE7C0150315EC7_METHOD_1_13D08274D2A9EE30_OFFSET UNITYSDK_OFFSET(0x1557C390)
#define CLASS_1_AFFE7C0150315EC7_METHOD_1_3A1FC77FDFA91BD2_OFFSET UNITYSDK_OFFSET(0x1557B860)
#define CLASS_1_AFFE7C0150315EC7_METHOD_1_6758131782EE47D7_OFFSET UNITYSDK_OFFSET(0x1557B940)
#define CLASS_1_AFFE7C0150315EC7_METHOD_1_72014D665645DA18_OFFSET UNITYSDK_OFFSET(0x1557B700)
#define CLASS_1_AFFE7C0150315EC7_METHOD_1_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0x1557B680)
#define CLASS_1_AFFE7C0150315EC7_METHOD_1_CF5CBC44FD2CF2B5_OFFSET UNITYSDK_OFFSET(0x1557BA60)
#define CLASS_1_AFFE7C0150315EC7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1557C620)

inline static constexpr unsigned int Class_1_AFFE7C0150315EC7_TypeDefinitionIndex = 66405;

class Class_1_AFFE7C0150315EC7 : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::CustomRP::VCMask>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::RPG::CustomRP::VCMask>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AFFE7C0150315EC7_TypeDefinitionIndex)->GetStaticField(0x54BE0);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AFFE7C0150315EC7__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_AFFE7C0150315EC7_METHOD_1_BFBBE8A6FE167A6A_OFFSET))();
	}

	static ::Class_1_029AD5385E36F1C7* Method_1_72014D665645DA18(::RPG::GameCore::CRPVirtualCameraConfig* a1, ::RPG::GameCore::GameEntityList* a2, ::RPG::GameCore::GameEntityList* a3, ::System::Boolean a4)
	{
		return ((::Class_1_029AD5385E36F1C7*(*)(::RPG::GameCore::CRPVirtualCameraConfig*, ::RPG::GameCore::GameEntityList*, ::RPG::GameCore::GameEntityList*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AFFE7C0150315EC7_METHOD_1_72014D665645DA18_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_029AD5385E36F1C7* Method_1_6758131782EE47D7(::RPG::GameCore::CRPVirtualCameraConfig* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::Class_1_029AD5385E36F1C7*(*)(::RPG::GameCore::CRPVirtualCameraConfig*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AFFE7C0150315EC7_METHOD_1_6758131782EE47D7_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_029AD5385E36F1C7* Method_1_3A1FC77FDFA91BD2(::Class_1_C3A033C60E10FDC7* a1, ::System::Boolean a2, ::RPG::GameCore::GameWorld* a3)
	{
		return ((::Class_1_029AD5385E36F1C7*(*)(::Class_1_C3A033C60E10FDC7*, ::System::Boolean, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_AFFE7C0150315EC7_METHOD_1_3A1FC77FDFA91BD2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_CF5CBC44FD2CF2B5(::Class_1_C3A033C60E10FDC7* a1, ::Class_1_029AD5385E36F1C7* a2)
	{
		return ((::System::Void(*)(::Class_1_C3A033C60E10FDC7*, ::Class_1_029AD5385E36F1C7*))((::PBYTE)hIl2Cpp + CLASS_1_AFFE7C0150315EC7_METHOD_1_CF5CBC44FD2CF2B5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_13D08274D2A9EE30(::Class_1_C3A033C60E10FDC7* a1, ::Class_1_029AD5385E36F1C7* a2, ::RPG::GameCore::GameWorld* a3)
	{
		return ((::System::Void(*)(::Class_1_C3A033C60E10FDC7*, ::Class_1_029AD5385E36F1C7*, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_AFFE7C0150315EC7_METHOD_1_13D08274D2A9EE30_OFFSET))(a1, a2, a3);
	}
};
