#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
class Class_5_AF65C3A968E836D2;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__CAMERAZOOMZ_B__114_0_OFFSET UNITYSDK_OFFSET(0x150B5F30)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x150B5EE0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x150B5F20)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DOUPDATE_B__213_0_OFFSET UNITYSDK_OFFSET(0x150B5FC0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DOUPDATE_B__213_1_OFFSET UNITYSDK_OFFSET(0x150B6170)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__INITVIDEOPOOL_G__ONRELEASE_182_1_OFFSET UNITYSDK_OFFSET(0x150B5F50)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__REQCAMERAZOOMZ_B__173_0_OFFSET UNITYSDK_OFFSET(0x150B5F40)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController___c_TypeDefinitionIndex = 44041;

	class UIHollowChessboard3DModelController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__114_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessboard3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x351A0);
		}
		static ::System::Action** StaticGet___9__173_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessboard3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x351A8);
		}
		static ::MoleMole::UIHollowChessboard3DModelController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowChessboard3DModelController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessboard3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x351B0);
		}
		static ::System::Action_1<::Class_5_AF65C3A968E836D2*>** StaticGet___9__213_0()
		{
			return (::System::Action_1<::Class_5_AF65C3A968E836D2*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessboard3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x351B8);
		}
		static ::System::Func_2<::Class_5_AF65C3A968E836D2*, ::System::Boolean>** StaticGet___9__213_1()
		{
			return (::System::Func_2<::Class_5_AF65C3A968E836D2*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessboard3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x351C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _CameraZoomZ_b__114_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__CAMERAZOOMZ_B__114_0_OFFSET))(this);
		}

		::System::Void _ReqCameraZoomZ_b__173_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__REQCAMERAZOOMZ_B__173_0_OFFSET))(this);
		}

		::System::Void _InitVideoPool_g__OnRelease_182_1(::Class_1_E9529ED64113E4E9* o)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__INITVIDEOPOOL_G__ONRELEASE_182_1_OFFSET))(this, o);
		}

		::System::Void _DoUpdate_b__213_0(::Class_5_AF65C3A968E836D2* c)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DOUPDATE_B__213_0_OFFSET))(this, c);
		}

		::System::Boolean _DoUpdate_b__213_1(::Class_5_AF65C3A968E836D2* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DOUPDATE_B__213_1_OFFSET))(this, c);
		}
	};
}
