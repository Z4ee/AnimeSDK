#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_70697F531F566942;
namespace RPG::GameCore { class ComplexSkillAISource; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_59F853DDC1BD9782_CLASS_3_FA99B1215EE18004_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1102D1E0)
#define CLASS_1_59F853DDC1BD9782_CLASS_3_FA99B1215EE18004_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1102D220)
#define CLASS_1_59F853DDC1BD9782_CLASS_3_FA99B1215EE18004_INVOKE_OFFSET UNITYSDK_OFFSET(0x1102CC20)
#define CLASS_1_59F853DDC1BD9782_CLASS_3_FA99B1215EE18004__CTOR_OFFSET UNITYSDK_OFFSET(0x1102C8C0)

inline static constexpr unsigned int Class_1_59F853DDC1BD9782_Class_3_FA99B1215EE18004_TypeDefinitionIndex = 43437;

class Class_1_59F853DDC1BD9782_Class_3_FA99B1215EE18004 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_CLASS_3_FA99B1215EE18004__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Invoke(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_CLASS_3_FA99B1215EE18004_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::ComplexSkillAISource* a1, ::Class_1_70697F531F566942* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISource*, ::Class_1_70697F531F566942*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_CLASS_3_FA99B1215EE18004_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FixPoint EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_59F853DDC1BD9782_CLASS_3_FA99B1215EE18004_ENDINVOKE_OFFSET))(this, a1);
	}
};
