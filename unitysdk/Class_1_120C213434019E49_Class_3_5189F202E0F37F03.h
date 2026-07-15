#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_70697F531F566942_1;
namespace RPG::GameCore { class ComplexSkillAIPostProcess; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_120C213434019E49_CLASS_3_5189F202E0F37F03_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x169CAD50)
#define CLASS_1_120C213434019E49_CLASS_3_5189F202E0F37F03_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x169CADE0)
#define CLASS_1_120C213434019E49_CLASS_3_5189F202E0F37F03_INVOKE_OFFSET UNITYSDK_OFFSET(0x169CA510)
#define CLASS_1_120C213434019E49_CLASS_3_5189F202E0F37F03__CTOR_OFFSET UNITYSDK_OFFSET(0x169CAC60)

inline static constexpr unsigned int Class_1_120C213434019E49_Class_3_5189F202E0F37F03_TypeDefinitionIndex = 51882;

class Class_1_120C213434019E49_Class_3_5189F202E0F37F03 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_120C213434019E49_CLASS_3_5189F202E0F37F03__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Invoke(::RPG::GameCore::ComplexSkillAIPostProcess* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::Class_1_70697F531F566942_1* a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ComplexSkillAIPostProcess*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_120C213434019E49_CLASS_3_5189F202E0F37F03_INVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::ComplexSkillAIPostProcess* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::Class_1_70697F531F566942_1* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::ComplexSkillAIPostProcess*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Class_1_70697F531F566942_1*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_120C213434019E49_CLASS_3_5189F202E0F37F03_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::RPG::GameCore::FixPoint EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_120C213434019E49_CLASS_3_5189F202E0F37F03_ENDINVOKE_OFFSET))(this, a1);
	}
};
