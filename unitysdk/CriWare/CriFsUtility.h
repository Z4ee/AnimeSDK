#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriFsBindRequest; }
namespace CriWare { class CriFsBinder; }
namespace CriWare { class CriFsInstallRequest; }
namespace CriWare { class CriFsLoadAssetBundleRequest; }
namespace CriWare { class CriFsLoadFileRequest; }
namespace CriWare { class CriFsRequest_DoneDelegate; }
namespace System { class String; }

#define CRIWARE_CRIFSUTILITY_BINDCPK_1_OFFSET UNITYSDK_OFFSET(0x146C5A10)
#define CRIWARE_CRIFSUTILITY_BINDCPK_OFFSET UNITYSDK_OFFSET(0x146C59D0)
#define CRIWARE_CRIFSUTILITY_BINDDIRECTORY_1_OFFSET UNITYSDK_OFFSET(0x146C5AA0)
#define CRIWARE_CRIFSUTILITY_BINDDIRECTORY_OFFSET UNITYSDK_OFFSET(0x146C5A60)
#define CRIWARE_CRIFSUTILITY_BINDFILE_1_OFFSET UNITYSDK_OFFSET(0x146C5B30)
#define CRIWARE_CRIFSUTILITY_BINDFILE_OFFSET UNITYSDK_OFFSET(0x146C5AF0)
#define CRIWARE_CRIFSUTILITY_CRIWARE0C80F382_OFFSET UNITYSDK_OFFSET(0x146C5EA0)
#define CRIWARE_CRIFSUTILITY_CRIWARE48E31D64_OFFSET UNITYSDK_OFFSET(0x146C5D60)
#define CRIWARE_CRIFSUTILITY_CRIWARECD0DC04A_OFFSET UNITYSDK_OFFSET(0x146C5C20)
#define CRIWARE_CRIFSUTILITY_INSTALL_1_OFFSET UNITYSDK_OFFSET(0x146C57D0)
#define CRIWARE_CRIFSUTILITY_INSTALL_2_OFFSET UNITYSDK_OFFSET(0x146C57E0)
#define CRIWARE_CRIFSUTILITY_INSTALL_3_OFFSET UNITYSDK_OFFSET(0x146C56C0)
#define CRIWARE_CRIFSUTILITY_INSTALL_OFFSET UNITYSDK_OFFSET(0x146C56B0)
#define CRIWARE_CRIFSUTILITY_LOADASSETBUNDLE_1_OFFSET UNITYSDK_OFFSET(0x146C5660)
#define CRIWARE_CRIFSUTILITY_LOADASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x146C5620)
#define CRIWARE_CRIFSUTILITY_LOADFILE_1_OFFSET UNITYSDK_OFFSET(0x146C5500)
#define CRIWARE_CRIFSUTILITY_LOADFILE_2_OFFSET UNITYSDK_OFFSET(0x146C14E0)
#define CRIWARE_CRIFSUTILITY_LOADFILE_OFFSET UNITYSDK_OFFSET(0x146C53E0)
#define CRIWARE_CRIFSUTILITY_SETPATHSEPARATOR_OFFSET UNITYSDK_OFFSET(0x146C5E00)
#define CRIWARE_CRIFSUTILITY_SETPROXYSERVER_OFFSET UNITYSDK_OFFSET(0x146C5CC0)
#define CRIWARE_CRIFSUTILITY_SETUSERAGENTSTRING_OFFSET UNITYSDK_OFFSET(0x146C5B80)
#define CRIWARE_CRIFSUTILITY_WEBINSTALL_OFFSET UNITYSDK_OFFSET(0x146C58E0)

namespace CriWare
{
	inline static constexpr unsigned int CriFsUtility_TypeDefinitionIndex = 37158;

	class CriFsUtility : public ::System::Object
	{
	public:
		// static const ::System::Int32 DefaultReadUnitSize = 0x100000; // 0x0

		static ::CriWare::CriFsLoadFileRequest* LoadFile(::System::String* a1, ::System::Int32 a2)
		{
			return ((::CriWare::CriFsLoadFileRequest*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_LOADFILE_OFFSET))(a1, a2);
		}

		static ::CriWare::CriFsLoadFileRequest* LoadFile_1(::System::String* a1, ::CriWare::CriFsRequest_DoneDelegate* a2, ::System::Int32 a3)
		{
			return ((::CriWare::CriFsLoadFileRequest*(*)(::System::String*, ::CriWare::CriFsRequest_DoneDelegate*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_LOADFILE_1_OFFSET))(a1, a2, a3);
		}

		static ::CriWare::CriFsLoadFileRequest* LoadFile_2(::CriWare::CriFsBinder* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::CriWare::CriFsLoadFileRequest*(*)(::CriWare::CriFsBinder*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_LOADFILE_2_OFFSET))(a1, a2, a3);
		}

		static ::CriWare::CriFsLoadAssetBundleRequest* LoadAssetBundle(::System::String* a1, ::System::Int32 a2)
		{
			return ((::CriWare::CriFsLoadAssetBundleRequest*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_LOADASSETBUNDLE_OFFSET))(a1, a2);
		}

		static ::CriWare::CriFsLoadAssetBundleRequest* LoadAssetBundle_1(::CriWare::CriFsBinder* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::CriWare::CriFsLoadAssetBundleRequest*(*)(::CriWare::CriFsBinder*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_LOADASSETBUNDLE_1_OFFSET))(a1, a2, a3);
		}

		static ::CriWare::CriFsInstallRequest* Install(::System::String* a1, ::System::String* a2)
		{
			return ((::CriWare::CriFsInstallRequest*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_INSTALL_OFFSET))(a1, a2);
		}

		static ::CriWare::CriFsInstallRequest* Install_1(::System::String* a1, ::System::String* a2, ::CriWare::CriFsRequest_DoneDelegate* a3)
		{
			return ((::CriWare::CriFsInstallRequest*(*)(::System::String*, ::System::String*, ::CriWare::CriFsRequest_DoneDelegate*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_INSTALL_1_OFFSET))(a1, a2, a3);
		}

		static ::CriWare::CriFsInstallRequest* Install_2(::CriWare::CriFsBinder* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::CriWare::CriFsInstallRequest*(*)(::CriWare::CriFsBinder*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_INSTALL_2_OFFSET))(a1, a2, a3);
		}

		static ::CriWare::CriFsInstallRequest* Install_3(::CriWare::CriFsBinder* a1, ::System::String* a2, ::System::String* a3, ::CriWare::CriFsRequest_DoneDelegate* a4)
		{
			return ((::CriWare::CriFsInstallRequest*(*)(::CriWare::CriFsBinder*, ::System::String*, ::System::String*, ::CriWare::CriFsRequest_DoneDelegate*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_INSTALL_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::CriWare::CriFsInstallRequest* WebInstall(::System::String* a1, ::System::String* a2, ::CriWare::CriFsRequest_DoneDelegate* a3)
		{
			return ((::CriWare::CriFsInstallRequest*(*)(::System::String*, ::System::String*, ::CriWare::CriFsRequest_DoneDelegate*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_WEBINSTALL_OFFSET))(a1, a2, a3);
		}

		static ::CriWare::CriFsBindRequest* BindCpk(::CriWare::CriFsBinder* a1, ::System::String* a2)
		{
			return ((::CriWare::CriFsBindRequest*(*)(::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_BINDCPK_OFFSET))(a1, a2);
		}

		static ::CriWare::CriFsBindRequest* BindCpk_1(::CriWare::CriFsBinder* a1, ::CriWare::CriFsBinder* a2, ::System::String* a3)
		{
			return ((::CriWare::CriFsBindRequest*(*)(::CriWare::CriFsBinder*, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_BINDCPK_1_OFFSET))(a1, a2, a3);
		}

		static ::CriWare::CriFsBindRequest* BindDirectory(::CriWare::CriFsBinder* a1, ::System::String* a2)
		{
			return ((::CriWare::CriFsBindRequest*(*)(::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_BINDDIRECTORY_OFFSET))(a1, a2);
		}

		static ::CriWare::CriFsBindRequest* BindDirectory_1(::CriWare::CriFsBinder* a1, ::CriWare::CriFsBinder* a2, ::System::String* a3)
		{
			return ((::CriWare::CriFsBindRequest*(*)(::CriWare::CriFsBinder*, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_BINDDIRECTORY_1_OFFSET))(a1, a2, a3);
		}

		static ::CriWare::CriFsBindRequest* BindFile(::CriWare::CriFsBinder* a1, ::System::String* a2)
		{
			return ((::CriWare::CriFsBindRequest*(*)(::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_BINDFILE_OFFSET))(a1, a2);
		}

		static ::CriWare::CriFsBindRequest* BindFile_1(::CriWare::CriFsBinder* a1, ::CriWare::CriFsBinder* a2, ::System::String* a3)
		{
			return ((::CriWare::CriFsBindRequest*(*)(::CriWare::CriFsBinder*, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_BINDFILE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetUserAgentString(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_SETUSERAGENTSTRING_OFFSET))(a1);
		}

		static ::System::Void SetProxyServer(::System::String* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_SETPROXYSERVER_OFFSET))(a1, a2);
		}

		static ::System::Void SetPathSeparator(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_SETPATHSEPARATOR_OFFSET))(a1);
		}

		static ::System::Boolean CRIWARECD0DC04A(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_CRIWARECD0DC04A_OFFSET))(a1);
		}

		static ::System::Boolean CRIWARE48E31D64(::System::String* a1, ::System::UInt16 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_CRIWARE48E31D64_OFFSET))(a1, a2);
		}

		static ::System::Boolean CRIWARE0C80F382(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_CRIWARE0C80F382_OFFSET))(a1);
		}
	};
}
