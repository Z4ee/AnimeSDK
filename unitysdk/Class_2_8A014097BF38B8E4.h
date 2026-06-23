#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_953952658186A166.h"
#include "unitysdk/Struct_2_6E1B724B14572104_1.h"
#include "unitysdk/Struct_2_C006DA4A56FC21E6.h"
#include "unitysdk/Struct_2_D9E98FAEB7FF7336.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9_1.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class Class_1_A59E81C83F485325;
class Class_5_FCAF801AC482D3B5;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole::Config { class ConfigHollowCameraAvoidObstacle; }

#define CLASS_2_8A014097BF38B8E4_METHOD_2_01C54625BD8EFE71_OFFSET UNITYSDK_OFFSET(0x18EAB290)
#define CLASS_2_8A014097BF38B8E4_METHOD_2_38A4C95C9F47AE73_OFFSET UNITYSDK_OFFSET(0x18EABCE0)
#define CLASS_2_8A014097BF38B8E4__CCTOR_OFFSET UNITYSDK_OFFSET(0x18EABC90)
#define CLASS_2_8A014097BF38B8E4__CTOR_OFFSET UNITYSDK_OFFSET(0x18EABC80)

inline static constexpr unsigned int Class_2_8A014097BF38B8E4_TypeDefinitionIndex = 80677;

class Class_2_8A014097BF38B8E4 : public ::Class_1_953952658186A166
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_2_4()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8A014097BF38B8E4_TypeDefinitionIndex)->GetStaticField(0x418F0);
	}
	::MoleMole::UIHollowChessboard3DModelController* Field_2_1; // 0x10
	::MoleMole::Config::ConfigHollowCameraAvoidObstacle* Field_2_2; // 0x18
	::Class_5_FCAF801AC482D3B5* Field_2_0; // 0x20
	::System::Boolean Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A014097BF38B8E4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8A014097BF38B8E4__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_01C54625BD8EFE71(::Class_1_A59E81C83F485325* a1, ::Struct_2_6E1B724B14572104_1& a2, ::Struct_2_D9E98FAEB7FF7336& a3, ::Struct_2_C006DA4A56FC21E6& a4, ::Struct_2_F213AC3D3FBF57B9_1& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A59E81C83F485325*, ::Struct_2_6E1B724B14572104_1&, ::Struct_2_D9E98FAEB7FF7336&, ::Struct_2_C006DA4A56FC21E6&, ::Struct_2_F213AC3D3FBF57B9_1&))((::PBYTE)hIl2Cpp + CLASS_2_8A014097BF38B8E4_METHOD_2_01C54625BD8EFE71_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::Class_2_8A014097BF38B8E4* Method_2_38A4C95C9F47AE73(::Class_5_FCAF801AC482D3B5* a1, ::MoleMole::Config::ConfigHollowCameraAvoidObstacle* a2)
	{
		return ((::Class_2_8A014097BF38B8E4*(*)(::Class_5_FCAF801AC482D3B5*, ::MoleMole::Config::ConfigHollowCameraAvoidObstacle*))((::PBYTE)hIl2Cpp + CLASS_2_8A014097BF38B8E4_METHOD_2_38A4C95C9F47AE73_OFFSET))(a1, a2);
	}
};
