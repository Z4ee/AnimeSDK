#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_953952658186A166.h"
#include "unitysdk/Struct_2_6E1B724B14572104_1.h"
#include "unitysdk/Struct_2_C006DA4A56FC21E6.h"
#include "unitysdk/Struct_2_D9E98FAEB7FF7336.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class Class_1_CC6544DCEA8E336D;
class Class_5_AF65C3A968E836D2;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole::Config { class ConfigHollowCameraAvoidObstacle; }

#define CLASS_2_8A014097BF38B8E4_METHOD_2_01C54625BD8EFE71_OFFSET UNITYSDK_OFFSET(0x116DB070)
#define CLASS_2_8A014097BF38B8E4_METHOD_2_38A4C95C9F47AE73_OFFSET UNITYSDK_OFFSET(0x116DBAC0)
#define CLASS_2_8A014097BF38B8E4__CCTOR_OFFSET UNITYSDK_OFFSET(0x116DBA70)
#define CLASS_2_8A014097BF38B8E4__CTOR_OFFSET UNITYSDK_OFFSET(0x116DBA60)

inline static constexpr unsigned int Class_2_8A014097BF38B8E4_TypeDefinitionIndex = 39361;

class Class_2_8A014097BF38B8E4 : public ::Class_1_953952658186A166
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_2_4()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8A014097BF38B8E4_TypeDefinitionIndex)->GetStaticField(0x43DB0);
	}
	::MoleMole::Config::ConfigHollowCameraAvoidObstacle* Field_2_2; // 0x10
	::Class_5_AF65C3A968E836D2* Field_2_0; // 0x18
	::MoleMole::UIHollowChessboard3DModelController* Field_2_1; // 0x20
	::System::Boolean Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A014097BF38B8E4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8A014097BF38B8E4__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_01C54625BD8EFE71(::Class_1_CC6544DCEA8E336D* a1, ::Struct_2_6E1B724B14572104_1& a2, ::Struct_2_D9E98FAEB7FF7336& a3, ::Struct_2_C006DA4A56FC21E6& a4, ::Struct_2_F213AC3D3FBF57B9& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CC6544DCEA8E336D*, ::Struct_2_6E1B724B14572104_1&, ::Struct_2_D9E98FAEB7FF7336&, ::Struct_2_C006DA4A56FC21E6&, ::Struct_2_F213AC3D3FBF57B9&))((::PBYTE)hIl2Cpp + CLASS_2_8A014097BF38B8E4_METHOD_2_01C54625BD8EFE71_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::Class_2_8A014097BF38B8E4* Method_2_38A4C95C9F47AE73(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::Config::ConfigHollowCameraAvoidObstacle* a2)
	{
		return ((::Class_2_8A014097BF38B8E4*(*)(::Class_5_AF65C3A968E836D2*, ::MoleMole::Config::ConfigHollowCameraAvoidObstacle*))((::PBYTE)hIl2Cpp + CLASS_2_8A014097BF38B8E4_METHOD_2_38A4C95C9F47AE73_OFFSET))(a1, a2);
	}
};
