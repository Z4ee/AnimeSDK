#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicImgStyle; }
namespace MoleMole { class ComicImgStyleConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_951CE93C29FA854F_METHOD_1_07B0E00A89BF2521_OFFSET UNITYSDK_OFFSET(0x16C1C6F0)
#define CLASS_1_951CE93C29FA854F_METHOD_1_23F83673F6F8513A_OFFSET UNITYSDK_OFFSET(0x16C1CE30)
#define CLASS_1_951CE93C29FA854F_METHOD_1_E77B24F9A93470BE_OFFSET UNITYSDK_OFFSET(0x16C1C910)
#define CLASS_1_951CE93C29FA854F_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0x16C1CD40)
#define CLASS_1_951CE93C29FA854F__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C1C6E0)

inline static constexpr unsigned int Class_1_951CE93C29FA854F_TypeDefinitionIndex = 44421;

class Class_1_951CE93C29FA854F : public ::System::Object
{
public:
	static ::MoleMole::ComicImgStyleConfig** StaticGet_Field_1_1()
	{
		return (::MoleMole::ComicImgStyleConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_951CE93C29FA854F_TypeDefinitionIndex)->GetStaticField(0x36AA0);
	}
	// static const ::System::String* Field_1_0; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_951CE93C29FA854F__CCTOR_OFFSET))();
	}

	static ::MoleMole::ComicImgStyle* Method_1_07B0E00A89BF2521(::System::String* a1)
	{
		return ((::MoleMole::ComicImgStyle*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_951CE93C29FA854F_METHOD_1_07B0E00A89BF2521_OFFSET))(a1);
	}

	static ::System::Void Method_1_E77B24F9A93470BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_951CE93C29FA854F_METHOD_1_E77B24F9A93470BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_951CE93C29FA854F_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::ComicImgStyleConfig* Method_1_23F83673F6F8513A()
	{
		return ((::MoleMole::ComicImgStyleConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_951CE93C29FA854F_METHOD_1_23F83673F6F8513A_OFFSET))();
	}
};
