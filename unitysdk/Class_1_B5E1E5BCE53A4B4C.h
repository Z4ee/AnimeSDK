#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_1.h"
#include "unitysdk/System/Object.h"

class Class_1_4AC26411646E4F6D;
class Class_1_87F855E9737731A7;
class Class_1_BCCF9BCA86B17EFC;
namespace MoleMole { class ClientSceneObjectStateLooperConfigBase; }
namespace MoleMole { class SceneObjectStateWidget; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_B5E1E5BCE53A4B4C_METHOD_1_B0EA38048E00B57D_OFFSET UNITYSDK_OFFSET(0xFA91230)
#define CLASS_1_B5E1E5BCE53A4B4C_METHOD_1_B1BC3F7510ACBE4A_OFFSET UNITYSDK_OFFSET(0xFA91120)
#define CLASS_1_B5E1E5BCE53A4B4C_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0xFA91100)
#define CLASS_1_B5E1E5BCE53A4B4C_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xFA91110)

inline static constexpr unsigned int Class_1_B5E1E5BCE53A4B4C_TypeDefinitionIndex = 56590;

class Class_1_B5E1E5BCE53A4B4C : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B5E1E5BCE53A4B4C_TypeDefinitionIndex)->GetStaticField(0x11890);
	}

	static ::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B5E1E5BCE53A4B4C_METHOD_1_C114A1F8E08B6F92_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_B5E1E5BCE53A4B4C_METHOD_1_C74CF020AA42ED85_OFFSET))();
	}

	static ::Class_1_4AC26411646E4F6D* Method_1_B1BC3F7510ACBE4A(::MoleMole::ClientSceneObjectStateLooperConfigBase* a1)
	{
		return ((::Class_1_4AC26411646E4F6D*(*)(::MoleMole::ClientSceneObjectStateLooperConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_B5E1E5BCE53A4B4C_METHOD_1_B1BC3F7510ACBE4A_OFFSET))(a1);
	}

	static ::Class_1_BCCF9BCA86B17EFC* Method_1_B0EA38048E00B57D(::Class_1_87F855E9737731A7* a1, ::MoleMole::SceneObjectStateWidget* a2, ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_1>* a3)
	{
		return ((::Class_1_BCCF9BCA86B17EFC*(*)(::Class_1_87F855E9737731A7*, ::MoleMole::SceneObjectStateWidget*, ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_1>*))((::PBYTE)hIl2Cpp + CLASS_1_B5E1E5BCE53A4B4C_METHOD_1_B0EA38048E00B57D_OFFSET))(a1, a2, a3);
	}
};
